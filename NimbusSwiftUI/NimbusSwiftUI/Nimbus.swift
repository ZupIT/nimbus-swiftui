/*
 * Copyright 2022 ZUP IT SERVICOS EM TECNOLOGIA E INOVACAO SA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import SwiftUI
import NimbusCore

public struct NimbusNav: View {
  let mode: Mode
  
  enum Mode {
    case remote(request: ViewRequest)
    case local(json: String)
  }

  public init(url: String) {
    mode = .remote(request: ViewRequest(url: url, method: .get, headers: nil, body: nil, fallback: nil))
  }
  
  public init(request: ViewRequest) {
    mode = .remote(request: request)
  }
  
  public init(json: String) {
    mode = .local(json: json)
  }
  
  public var body: some View {
    NavigationView {
      Nimbus(mode: mode)
    }
    .navigationViewStyle(.stack)
  }
}

struct Nimbus: View {
  
  @EnvironmentObject
  private var config: NimbusConfig // components
  
//  private var json: String
  
  @ObservedObject var viewModel: ViewModel
  
  init(mode: NimbusNav.Mode) {
    switch mode {
    case .remote(request: let request):
      viewModel = ViewModel(request: request)
    case .local(json:):
      viewModel = ViewModel(request: ViewRequest(url: "", method: .get, headers: nil, body: nil, fallback: nil))
    }
  }
  
  init(viewModel: ViewModel) {
    self.viewModel = viewModel
  }
  
  var body: some View {
    VStack {
      NavigationLink(unwrap: $viewModel.next) { viewModel in
        Nimbus(viewModel: viewModel.wrappedValue)
      }
      .isDetailLink(false)
      
      switch viewModel.state {
      case .loading:
        ActivityIndicator(isAnimating: .constant(true))
      case let .error(description: description):
        Text(description)
      case let .view(node: node):
        renderTree(node: node)
      }
    
    }
    .onAppear {
      viewModel.config = config
      viewModel.load()
//      print("Registering view listener")
//      do {
//        let initialTree = try config.core.createNodeFromJson(json: json)
//        let view = config.core.createView(navigator: viewModel)
//        view.onChange { node in
//          tree = node
//        }
//        view.renderer.paint(tree: initialTree, anchor: nil, mode: .replace)
//      } catch  {
//        print("")
//      }
      
    }
  }
  
  private func renderTree(node: ServerDrivenNode) -> AnyView {
    if let function = config.components[node.component] {
      let children: [AnyView] = node.children?.map { renderTree(node: $0) } ?? []
      return function(node, children)
    } else {
      return AnyView(Text("Component with type \(node.component) is not registered"))
    }
  }
}

struct ActivityIndicator: UIViewRepresentable {
  
  @Binding var isAnimating: Bool
  let style: UIActivityIndicatorView.Style = .medium
  
  func makeUIView(context: UIViewRepresentableContext<ActivityIndicator>) -> UIActivityIndicatorView {
    return UIActivityIndicatorView(style: style)
  }
  
  func updateUIView(_ uiView: UIActivityIndicatorView, context: UIViewRepresentableContext<ActivityIndicator>) {
    isAnimating ? uiView.startAnimating() : uiView.stopAnimating()
  }
}

class ViewModel: ObservableObject, ServerDrivenNavigator {
  
  func push(request: ViewRequest) {
    next = ViewModel(request: request)
    next?.prev = self
    next?.load()
  }

  func pop() {
    prev?.next = nil
  }

  func popTo(url: String) {
    find(by: url)?.next = nil
  }

  func present(request: ViewRequest) {
    // TODO: impl
  }
  
  func dismiss() {
    
  }
  
  let url: String
  let request: ViewRequest
  
  var config: NimbusConfig?
  
  @Published var state: State = .loading
  enum State {
    case loading
    case error(description: String)
    case view(node: ServerDrivenNode)
  }
  
  func load() {
    state = .loading
    config?.core.viewClient.fetch(request: request) { node, error in
      if let node = node {
        let view = self.config?.core.createView(navigator: self)
        view?.onChange { node in
          self.state = .view(node: node)
        }
        view?.renderer.paint(tree: node, anchor: nil, mode: .replace)
      } else if let error = error {
        self.state = .error(description: error.localizedDescription)
      }
    }
  }
  
  @Published var next: ViewModel?
  weak var prev: ViewModel?
  
  init(request: ViewRequest) {
    url = request.url
    self.request = request
  }
  
  private func find(by url: String) -> ViewModel? {
    if self.url == url || prev == nil { return self }
    return prev?.find(by: url)
  }
}

// Utils
extension Binding {
  init?(unwrap binding: Binding<Value?>) {
    guard let wrappedValue = binding.wrappedValue
    else { return nil }
    
    self.init(
      get: { wrappedValue },
      set: { binding.wrappedValue = $0 }
    )
  }
  
  func isPresent<Wrapped>() -> Binding<Bool> where Value == Wrapped? {
    .init(
      get: { self.wrappedValue != nil },
      set: { isPresented in
        if !isPresented {
          self.wrappedValue = nil
        }
      }
    )
  }
}

extension NavigationLink {
  init<Value, WrappedDestination>(
    unwrap optionalValue: Binding<Value?>,
    onNavigate: @escaping (Bool) -> Void = { _ in },
    @ViewBuilder destination: @escaping (Binding<Value>) -> WrappedDestination
  )
  where Destination == WrappedDestination?, Label == EmptyView
  {
    self.init(
      isActive: optionalValue.isPresent().didSet(onNavigate),
      destination: {
        if let value = Binding(unwrap: optionalValue) {
          destination(value)
        }
      },
      label: {}
    )
  }
}

extension Binding {
  func didSet(_ callback: @escaping (Value) -> Void) -> Self {
    .init(
      get: { self.wrappedValue },
      set: {
        self.wrappedValue = $0
        callback($0)
      }
    )
  }
}
