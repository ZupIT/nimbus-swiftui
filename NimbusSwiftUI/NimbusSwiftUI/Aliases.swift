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

// MARK: - public

public typealias Action = @convention(block) (ActionEvent) -> KotlinUnit?
public typealias Operation = @convention(block) (KotlinArray<AnyObject>) -> Any?
public typealias Component = (NimbusCore.ServerDrivenNode, [AnyComponent]) throws -> AnyComponent

public typealias ViewRequest = NimbusCore.ViewRequest
public typealias ServerDrivenNode = NimbusCore.ServerDrivenNode



// MARK: - AnyComponent

public struct AnyComponent: View {
  let view: AnyView
  public let component: Any
  
  public init<Content: View>(_ content: Content) {
    self.view = AnyView(content)
    self.component = content
  }
  
  public var body: some View {
    view
  }
}
