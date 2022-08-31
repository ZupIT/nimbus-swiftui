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
    case view(ServerDrivenNode)
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
  
  deinit {
    view?.destroy()
  }
}

// MARK: - load


extension RenderNode: CustomStringConvertible {
  public override var description: String {
    var result = "{\n\"component\":\"\(component)\",\n\"id\":\"\(id)\",\n\"children\":["
    children?.forEach { result += "\($0),"}
    if result.last == "," {
      result.removeLast()
    }
    result += "\n]}"
    return result
  }
}

extension ViewModel {
  func load() {
    state = .loading
    
    if view == nil {
//      TODO: Verify lifecycle
      view = core.createView(
        getNavigator: {
          [unowned self] in self
        },
        description: url
      )
      view?.onChange { [weak self] node in
//      TODO: Fix dispatch main on nimbus core
//        DispatchQueue.main.async {
          self?.state = .view(node)
//        }
      }
    }
    
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
      try view?.renderer.paint(tree: node, anchor: nil, mode: .replace)
    } catch {
      state = .error(error)
    }
  }
  
  private func load(from request: ViewRequest) {
    core.viewClient.fetch(request: request) { [weak self] node, error in
      DispatchQueue.main.async {
        if let node = node {
          do {
            try self?.view?.renderer.paint(tree: node, anchor: nil, mode: .replace)
          } catch {
            self?.state = .error(error)
          }
        } else if let error = error {
          self?.state = .error(error)
        }
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
