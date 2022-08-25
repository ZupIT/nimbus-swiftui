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

struct NimbusView: View {
  
  @Environment(\.dependencies) private var dependencies: Dependencies
  
  @ObservedObject private var viewModel: ViewModel
  
  init(viewModel: ViewModel) {
    self.viewModel = viewModel
  }
  
  var body: some View {
    ZStack() {
      Color.clear
      
      NavigationLink(unwrap: $viewModel.next.case(ViewModel.Navigation.pushCasePath)) { viewModel in
        NimbusView(viewModel: viewModel.wrappedValue)
      }
      .isDetailLink(false)
      
      switch viewModel.state {
      case .loading:
        dependencies.loading()
      case let .error(error):
        dependencies.error(error, retry)
      case let .view(node: node):
        components(node: node)
      }
    }
    .sheet(unwrap: $viewModel.next.case(ViewModel.Navigation.presentCasePath)) { viewModel in
      NavigationView {
        NimbusView(viewModel: viewModel.wrappedValue)
      }
      .navigationViewStyle(.stack)
    }
    .onLoad {
      viewModel.load()
    }
  }
  
  func retry() {
    viewModel.load()
  }
  
  func components(node: ServerDrivenNode) -> AnyComponent {
    nodeHasUpdates = [:]
    let component = renderTree(node: node)
    return component
  }
  
  private func renderTree(node: ServerDrivenNode) -> AnyComponent {
    if let function = dependencies.components[node.component] {
      let children: [AnyComponent] = node.children?.map { renderTree(node: $0) } ?? []
      
      do {
        // TODO: create a map [String: Deserializable.Type]
        let component = try function(node, children)
        guard let id = component.id else {
          return component
        }
        
        // compare last node properties if change set nodeHasUpdates
        let properties = NodeProperties(node.properties)
        if lastNodeProperties[id] == nil {
          nodeHasUpdates[id] = true
        } else if let lastComponent = lastNodeProperties[id], properties != lastComponent {
          nodeHasUpdates[id] = true
        } else {
          for child in children {
            if let childrenId = child.id, nodeHasUpdates[childrenId] ?? false {
              nodeHasUpdates[id] = true
              break
            }
          }
        }
        
        lastNodeProperties[id] = properties
        return component
        
      } catch {
        viewModel.state = .error(error)
        return AnyComponent(EmptyView())
      }
    } else {
      viewModel.state = .error(RenderingError.notRegistered(node.component))
      return AnyComponent(EmptyView())
    }
  }
}

var nodeHasUpdates: [String: Bool] = [:]
var lastNodeProperties: [String: NodeProperties] = [:]

enum NodeProperties: Equatable {
  case null
  case bool(Bool)
  case int(Int)
  case double(Double)
  case string(String)
  case array([NodeProperties])
  case dictionary([String: NodeProperties])

  public init(_ object: Any?) {
    if let bool = object as? Bool {
      self = .bool(bool)
    } else if let int = object as? Int {
      self = .int(int)
    } else if let double = object as? Double {
      self = .double(double)
    } else if let string = object as? String {
      self = .string(string)
    } else if let array = object as? [Any] {
      self = .array(array.map { .init($0) })
    } else if let dictionary = object as? [String: Any] {
      self = .dictionary(dictionary.mapValues { .init($0) })
    } else {
      self = .null
    }
  }
}

enum RenderingError: LocalizedError {
  case notRegistered(String)
  
  var errorDescription: String? {
    switch self {
    case .notRegistered(let string):
      return "\(string) not registered!"
    }
  }
}
