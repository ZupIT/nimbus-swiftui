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

/// A View that's describes a server-driven flow.
///
/// `NimbusNav` expects a ``NimbusConfig`` passed as an environmentObject somewhere up in the hierarchy. Sample:
///
/// ```swift
/// struct ContentView: View {
///   var body: some View {
///     NimbusNav(url: "/screen1.json")
///     .environmentObject(
///       NimbusConfig(
///         baseUrl: "https://baseurlhost",
///         components: components
///       )
///     )
///   }
/// }
/// ```
///
public struct NimbusNav: View {
  
  @EnvironmentObject private var config: NimbusConfig
  
  private let mode: Mode
  
  enum Mode {
    case remote(request: ViewRequest)
    case local(json: String)
  }
  
  /// Creates a `NimbusNav` and starts with a url as initial server-driven view.
  /// - Parameter url: initial url
  public init(url: String) {
    mode = .remote(request: ViewRequest(url))
  }
  
  /// Creates a `NimbusNav` and starts with a custom request.
  /// - Parameter request: custom request
  ///
  /// Sample:
  /// ```swift
  /// NimbusNav(request:
  ///   ViewRequest(
  ///     url: "/screen1.json",
  ///     method: .get,
  ///     headers: ["customHeader", "customValue"],
  ///     body: ["body": "value"],
  ///     fallback: nil
  ///   )
  /// )
  /// ```
  ///
  public init(request: ViewRequest) {
    mode = .remote(request: request)
  }
  
  /// Creates a `NimbusNav` and starts with a json `String`.
  /// - Parameter json: initial json
  ///
  /// Sample:
  /// ```swift
  /// NimbusNav(json: """
  /// {
  ///   "component": "material:text",
  ///   "properties": {
  ///     "text": "Hello World!"
  ///   }
  /// }
  /// """)
  /// ```
  ///
  public init(json: String) {
    mode = .local(json: json)
  }
  
  public var body: some View {
    NavigationView {
      Nimbus(viewModel: ViewModel(mode: mode, core: config.core))
    }
    .navigationViewStyle(.stack)
  }
}

struct Nimbus: View {
  
  @EnvironmentObject private var config: NimbusConfig
  
  @ObservedObject private var viewModel: ViewModel
  
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
    .onLoad {
      viewModel.load()
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

class ViewModel: ObservableObject {
  
  @Published var state: State = .loading
  enum State {
    case loading
    case error(description: String)
    case view(node: ServerDrivenNode)
  }
  
  @Published var next: ViewModel?
  private weak var prev: ViewModel?
  
  private let mode: NimbusNav.Mode
  private var url: String {
    switch mode {
    case .local(json:):
      return "root"
    case let .remote(request: request):
      return request.url
    }
  }
  
  private let core: NimbusCore.Nimbus
  private lazy var view: ServerDrivenView = {
    let view = core.createView(navigator: self)
    view.onChange { node in
      self.state = .view(node: node)
    }
    return view
  }()
  
  init(mode: NimbusNav.Mode, core: NimbusCore.Nimbus) {
    self.mode = mode
    self.core = core
  }
}

// MARK: - ViewModelLoad

extension ViewModel {
  func load() {
    state = .loading
    switch mode {
    case let .remote(request: request):
      load(from: request)
    case let .local(json: json):
      load(from: json)
    }
  }
  
  private func load(from json: String) {
    do {
      let node = try core.createNodeFromJson(json: json)
      view.renderer.paint(tree: node, anchor: nil, mode: .replace)
    } catch {
      state = .error(description: error.localizedDescription)
    }
  }
  
  private func load(from request: ViewRequest) {
    core.viewClient.fetch(request: request) { node, error in
      if let node = node {
        self.view.renderer.paint(tree: node, anchor: nil, mode: .replace)
      } else if let error = error {
        self.state = .error(description: error.localizedDescription)
      }
    }
  }
}

// MARK: - ServerDrivenNavigator

extension ViewModel: ServerDrivenNavigator {
  func push(request: ViewRequest) {
    next = ViewModel(mode: .remote(request: request), core: core)
    next?.prev = self
  }

  func pop() {
    prev?.next = nil
  }

  func popTo(url: String) {
    find(by: url)?.next = nil
  }

  func present(request: ViewRequest) {
    fatalError("not implemented!")
  }
  
  func dismiss() {
    fatalError("not implemented!")
  }
  
  private func find(by url: String) -> ViewModel? {
    if self.url == url || prev == nil { return self }
    return prev?.find(by: url)
  }
}
