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

public typealias Action = (ServerDrivenAction, ServerDrivenNode, ServerDrivenView) -> KotlinUnit?
public typealias Operation = ([Any]) -> Any?
public typealias Component = (ServerDrivenNode, [AnyView]) -> AnyView

public class NimbusConfig: ObservableObject {
  
  var components: [String: (ServerDrivenNode, [AnyView]) -> AnyView]
  var core: NimbusCore.Nimbus
  
  public init(
    baseUrl: String,
    components: [String: Component] = [:],
    actions: [String : Action] = [:],
    operations: [String : Operation] = [:],
    logger: Logger = DefaultLogger(),
    urlBuilder: UrlBuilder? = nil,
    httpClient: HttpClient = DefaultHttpClient(),
    viewClient: ViewClient = DefaultViewClient(),
    idManager: IdManager = DefaultIdManager()
  ) {
    self.components = components
    self.core = NimbusCore.Nimbus(
      config: ServerDrivenConfig(
        baseUrl: baseUrl,
        platform: "iOS",
        actions: actions,
        operations: operations,
        lifecycleHooks: nil,
        logger: logger,
        urlBuilder: urlBuilder ?? DefaultUrlBuilder(baseUrl: baseUrl),
        httpClient: httpClient,
        viewClient: viewClient,
        idManager: idManager
      )
    )
  }
}
