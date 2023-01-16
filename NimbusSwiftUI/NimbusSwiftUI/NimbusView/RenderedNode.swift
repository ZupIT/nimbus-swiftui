/*
 * Copyright 2023 ZUP IT SERVICOS EM TECNOLOGIA E INOVACAO SA
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

struct RenderedNode: View {
  @ObservedObject var observableNode: ObservableNode
  @Environment(\.core) private var core: Core
  
  var body: some View {
    if let function = core.uiLibraryManager.getComponent(identifier: observableNode.node.component) {
      do {
        return try function(observableNode.node)
      } catch {
        return showError(error)
      }
    } else {
      return showError(RenderingError.notRegistered(observableNode.node.component))
    }
  }
  
  private func showError(_ error: Error) -> AnyView {
    core.logger.log(message: "Error: \(error)", level: .error)
    let description: String = error is RenderingError ? error.localizedDescription :
      "Error while deserializing component. Check the logs for details."
    #if DEBUG
      return AnyView(ErrorView(errorDescription: description))
    #else
      return AnyView(EmptyView())
    #endif
  }
}

enum RenderingError: LocalizedError {
  case notRegistered(String)
  
  var errorDescription: String? {
    switch self {
    case .notRegistered(let name):
      return "Could not find any component named \(name)."
    }
  }
}

struct ErrorView: View {
  var errorDescription: String
  
  var body: some View {
    Text(errorDescription)
      .foregroundColor(.red)
      .background(Color.yellow)
  }
}
