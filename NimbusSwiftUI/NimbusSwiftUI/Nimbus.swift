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

class MyNavigator: ServerDrivenNavigator {}

public struct Nimbus: View {
  @EnvironmentObject
  private var config: NimbusConfig
  
  private var json: String
  @State
  private var tree: ServerDrivenNode?
  @State
  private var view: ServerDrivenView?
  
  public init(json: String) {
    self.json = json
  }
  
  public var body: some View {
    VStack {
      tree == nil ? AnyView(Text("Loading...")) : renderTree(node: tree!)
    }
    .onAppear {
      print("Registering view listener")
      let initialTree = config.core.createNodeFromJson(json: json)
      self.view = config.core.createView(navigator: MyNavigator())
      view?.onChange { node in
        tree = node
      }
      view?.renderer.paint(tree: initialTree)
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
