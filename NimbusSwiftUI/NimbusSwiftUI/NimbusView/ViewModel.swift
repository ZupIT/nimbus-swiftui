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
    case error(Error)
    case view(ObservableNode)
  }
  
  weak var prev: ViewModel?
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
  
  let mode: NimbusNavigator.Mode
  var url: String {
    switch mode {
    case .local(json:):
      return "json"
    case let .remote(request: request):
      return request.url
    }
  }
  
  let core: NimbusCore.Nimbus
  var view: ServerDrivenView?
  
  init(mode: NimbusNavigator.Mode, core: NimbusCore.Nimbus) {
    self.mode = mode
    self.core = core
  }
}

// MARK: - load

extension ViewModel {
  func load(callback: (() -> Void)? = nil) {
    state = .loading
    
    switch mode {
      case let .remote(request: request):
        createViewToLoad(request: request)
        load(from: request, callback: callback)
      case let .local(json: json):
        createViewToLoad(request: nil)
        load(from: json)
        if let callback = callback { callback() }
    }
  }
     
  private func createViewToLoad(request: ViewRequest?) {
    if view == nil {
      // TODO: Verify lifecycle
      view = ServerDrivenView(
        nimbus: core,
        states: getStatesFromRequest(request: request),
        description: url
      ) {
        [unowned self] in self
      }
    }
  }
    
  private func getStatesFromRequest(request: ViewRequest?) -> [ServerDrivenState]? {
    if (request != nil && request!.params != nil && !request!.params!.isEmpty) {
      var viewStates: [ServerDrivenState] = []
      for (key, value) in request!.params! {
        viewStates.append(ServerDrivenState(id: key, value: value))
      }
      return viewStates
    }
    return nil
  }
  
  private func load(from json: String) {
    do {
      // TODO: Fix dispatch main on nimbus core
      let tree = try core.nodeBuilder.buildFromJsonString(json: json)
      if let view = view {
        tree.initialize(scope: view)
        state = .view(ObservableNode(tree))
      }
    } catch {
      state = .error(error)
    }
  }
  
  private func load(from request: ViewRequest, callback: (() -> Void)? = nil) {
    core.viewClient.fetch(request: request) { [weak self] tree, error in
      DispatchQueue.main.async {
        if let tree = tree {
          // TODO: Fix dispatch main on nimbus core
          if let view = self?.view {
            tree.initialize(scope: view)
            self?.state = .view(ObservableNode(tree))
          }
        } else if let error = error {
          self?.state = .error(error)
        }
        if let callback = callback { callback() }
      }
    }
  }
}

// MARK: - ServerDrivenNavigator

extension ViewModel: ServerDrivenNavigator {
  func push(request: ViewRequest) {
    next = .push(ViewModel(mode: .remote(request), core: core))
  }
  
  func present(request: ViewRequest) {
    next = .present(ViewModel(mode: .remote(request), core: core))
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
