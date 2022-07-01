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

public struct Nimbus<Content: View>: View {
  
  var dependencies = Dependencies()
  var coreDependencies: CoreDependencies
  
  var content: Content
  
  public init(baseUrl: String, @ViewBuilder content: () -> Content) {
    coreDependencies = CoreDependencies(baseUrl: baseUrl, actions: ["openUrl": openUrl])
    self.content = content()
  }
    
  public var body: some View {
    content
      .environment(\.dependencies, dependencies)
      .environment(\.core, Core(
        config: ServerDrivenConfig(
          baseUrl: coreDependencies.baseUrl,
          platform: "iOS",
          actions: coreDependencies.actions,
          actionObservers: coreDependencies.actionObservers,
          operations: coreDependencies.operations,
          logger: coreDependencies.logger,
          urlBuilder: coreDependencies.urlBuilder,
          httpClient: coreDependencies.httpClient,
          viewClient: coreDependencies.viewClient,
          idManager: coreDependencies.idManager)
      ))
  }
  
  func set<Value>(keypath: WritableKeyPath<Nimbus, Value>, value: Value) -> Nimbus {
    var mutable = self
    mutable[keyPath: keypath] = value
    return mutable
  }
  
}

// MARK: - Dependencies

extension Nimbus {
  public func components(_ components: [String: Component]) -> Nimbus {
    let mergedComponents = dependencies.components.merging(components) { $1 }
    return set(keypath: \.dependencies.components, value: mergedComponents)
  }
  
  public func error<ErrorView: View>(@ViewBuilder error: @escaping (Error, @escaping () -> Void) -> ErrorView) -> Nimbus {
    set(keypath: \.dependencies.error, value: { (errorParam, retry) in
      AnyView(error(errorParam, retry))
    })
  }
  
  public func loading<LoadingView: View>(@ViewBuilder loading: @escaping () -> LoadingView) -> Nimbus {
    set(keypath: \.dependencies.loading, value: { AnyView(loading()) })
  }
}

// MARK: - Core

extension Nimbus {
  public func actions(_ actions: [String : Action]) -> Nimbus {
    let mergedActions = coreDependencies.actions?.merging(actions) { $1 }
    return set(keypath: \.coreDependencies.actions, value: mergedActions)
  }
  
  public func actionObservers(_ actionObservers: [Action]) -> Nimbus {
    set(keypath: \.coreDependencies.actionObservers, value: actionObservers)
  }
  
  public func operations(_ operations: [String : Operation]) -> Nimbus {
    let mergedOperations = coreDependencies.operations?.merging(operations) { $1 }
    return set(keypath: \.coreDependencies.operations, value: mergedOperations)
  }
  
  public func logger(_ logger: Logger) -> Nimbus {
    set(keypath: \.coreDependencies.logger, value: logger)
  }
  
  public func urlBuilder(_ urlBuilder: UrlBuilder) -> Nimbus {
    set(keypath: \.coreDependencies.urlBuilder, value: urlBuilder)
  }
  
  public func httpClient(_ httpClient: HttpClient) -> Nimbus {
    set(keypath: \.coreDependencies.httpClient, value: httpClient)
  }
  
  public func viewClient(_ viewClient: ViewClient) -> Nimbus {
    set(keypath: \.coreDependencies.viewClient, value: viewClient)
  }
  
  public func idManager(_ idManager: IdManager) -> Nimbus {
    set(keypath: \.coreDependencies.idManager, value: idManager)
  }
}
