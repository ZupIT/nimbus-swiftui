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

public class NimbusConfig: ObservableObject {
  
  var error: (Error, @escaping () -> Void) -> AnyView
  var loading: () -> AnyView
  var components: [String: Component]
  
  var core: NimbusCore.Nimbus
  
  public init<ErrorView: View, LoadingView: View>(
    baseUrl: String,
    @ViewBuilder error: @escaping (Error, @escaping () -> Void) -> ErrorView,
    @ViewBuilder loading: @escaping () -> LoadingView,
    components: [String: Component] = [:],
    actions: [String : Action]? = nil,
    actionObservers: [Action]? = nil,
    operations: [String : Operation]? = nil,
    logger: Logger? = nil,
    urlBuilder: UrlBuilder? = nil,
    httpClient: HttpClient? = nil,
    viewClient: ViewClient? = nil,
    idManager: IdManager? = nil
  ) {
    
    self.error = { (errorParam, retry) in
      AnyView(error(errorParam, retry))
    }
    
    self.loading = {
      AnyView(loading())
    }
    
    self.components = components
    self.core = NimbusCore.Nimbus(
      config: ServerDrivenConfig(
        baseUrl: baseUrl,
        platform: "iOS",
        actions: actions,
        actionObservers: actionObservers,
        operations: operations,
        logger: logger,
        urlBuilder: urlBuilder,
        httpClient: httpClient,
        viewClient: viewClient,
        idManager: idManager
      )
    )
  }
}

extension NimbusConfig {
  public convenience init(
    baseUrl: String,
    components: [String: Component] = [:],
    actions: [String : Action]? = nil,
    actionObservers: [Action]? = nil,
    operations: [String : Operation]? = nil,
    logger: Logger? = nil,
    urlBuilder: UrlBuilder? = nil,
    httpClient: HttpClient? = nil,
    viewClient: ViewClient? = nil,
    idManager: IdManager? = nil
  ) {
    self.init(
      baseUrl: baseUrl,
      error: { error, retry in
        Text(error.localizedDescription)
        Button("retry") {
          retry()
        }
      },
      loading: {
        ActivityIndicator(isAnimating: .constant(true))
      },
      components: components,
      actions: actions,
      actionObservers: actionObservers,
      operations: operations,
      logger: logger,
      urlBuilder: urlBuilder,
      httpClient: httpClient,
      viewClient: viewClient,
      idManager: idManager
    )
  }
}
