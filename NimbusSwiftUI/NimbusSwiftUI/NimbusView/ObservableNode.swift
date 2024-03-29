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

class ObservableNode: ObservableObject, Dependent {
  let node: ServerDrivenNode
  
  init(_ node: ServerDrivenNode) {
    self.node = node
    node.addDependent(dependent: self)
  }
  
  deinit {
    node.removeDependent(dependent: self)
  }
  
  func update() {
    objectWillChange.send()
  }
}

extension ObservableNode: Equatable {
  static func == (lhs: ObservableNode, rhs: ObservableNode) -> Bool {
    lhs.node.id == rhs.node.id
  }
}
