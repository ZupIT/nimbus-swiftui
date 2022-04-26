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

public var components: [String: (ServerDrivenNode, [AnyView]) -> AnyView] = [:]

public struct Beagle: View {
  private var nimbus = Nimbus(
    config: ServerDrivenConfig(
      baseUrl: "",
      platform: "",
      actions: nil,
      operations: nil,
      lifecycleHooks: nil,
      logger: DefaultLogger(),
      urlBuilder: DefaultUrlBuilder(baseUrl: "http://localhost:8080"),
      httpClient: DefaultHttpClient(),
      viewClient: DefaultViewClient(),
      idManager: DefaultIdManager()
    )
  )
  
  var initialTree: ServerDrivenNode
  @State
  private var currentTree: ServerDrivenNode?
  private var view: ServerDrivenView
  
  public init(json: String) {
    view = nimbus.createView(navigator: MyNavigator())
    initialTree = nimbus.createNodeFromJson(json: json)
  }
  
  public var body: some View {
    VStack {
      currentTree == nil ? AnyView(Text("Loading...")) : renderTree(node: currentTree!)
    }.onAppear(perform: {
      print("Registering beagle View listener")
      view.onChange { node in
        currentTree = node
      }
      view.renderer.paint(tree: initialTree)
    })
  }
  
  func renderTree(node: ServerDrivenNode) -> AnyView {
    if let function = components[node.component] {
      let children: [AnyView] = node.children?.map { AnyView(renderTree(node: $0)) } ?? []
      return function(node, children)
    } else {
      return AnyView(Text("Component with type \(node.component) is not registered"))
    }
  }
}
