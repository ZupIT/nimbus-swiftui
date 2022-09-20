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

import Foundation
import SwiftUI

public struct RenderedNode: View {
  @ObservedObject var observableNode: ObservableNode
  @Environment(\.core) private var core: Core
  var onError: (Error) -> AnyView
  
  public var body: AnyView {
    if let function = core.uiLibraryManager.getComponent(identifier: observableNode.node.component) {
      do {
        let children = {
          ForEach(observableNode.children ?? [], id: \.node.id) { child in
            RenderedNode(observableNode: child, onError: onError)
          }
        }
        return try function(observableNode.node, children)
      } catch {
        return onError(error)
      }
    } else {
      return onError(RenderingError.notRegistered(observableNode.node.component))
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
