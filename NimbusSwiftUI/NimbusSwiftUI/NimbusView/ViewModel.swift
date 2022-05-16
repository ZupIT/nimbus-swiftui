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

import NimbusCore

class ViewModel: ObservableObject {
  
  @Published var state: State = .loading
  enum State {
    case loading
    case error(description: String)
    case view(node: ServerDrivenNode)
  }
  
  private weak var prev: ViewModel?
  @Published var next: Navigation? {
    didSet {
      switch next {
      case let .push(viewModel), let .present(viewModel):
        viewModel.prev = self
      case .none:
        break
      }
    }
  }
  
  enum Navigation {
    case push(ViewModel)
    case present(ViewModel)
  }
  
  private let mode: NimbusNavigator.Mode
  var url: String {
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
  
  init(mode: NimbusNavigator.Mode, core: NimbusCore.Nimbus) {
    self.mode = mode
    self.core = core
  }
}

// MARK: - load

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
    next = .push(ViewModel(mode: .remote(request: request), core: core))
  }
  
  func present(request: ViewRequest) {
    next = .present(ViewModel(mode: .remote(request: request), core: core))
  }

  func pop() {
    if case .push = prev?.next {
      prev?.next = nil
    }
  }
  
  func dismiss() {
    if case .present = prev?.next {
      prev?.next = nil
    }
  }

  func popTo(url: String) {
    find(by: url)?.next = nil
  }
  
  private func find(by url: String) -> ViewModel? {
    if self.url == url {
      return self
    } else if case .present = prev?.next {
      return nil
    }
    return prev?.find(by: url)
  }
}
