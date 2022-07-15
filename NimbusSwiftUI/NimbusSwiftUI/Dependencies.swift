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

// MARK: - Dependencies

struct Dependencies {
  var error: (Error, @escaping () -> Void) -> AnyView = { error, retry in
    AnyView(VStack {
      Text(error.localizedDescription)
      Button("retry") {
        retry()
      }
    })
  }
  
  var loading: () -> AnyView = {
    AnyView(ActivityIndicator(isAnimating: .constant(true)))
  }
  
  var components: [String: Component] = [:]
}

struct DependenciesKey: EnvironmentKey {
  static var defaultValue = Dependencies()
}

extension EnvironmentValues {
  var dependencies: Dependencies {
    get { self[DependenciesKey.self] }
    set { self[DependenciesKey.self] = newValue }
  }
}

// MARK: - Core

typealias Core = NimbusCore.Nimbus

struct CoreDependencies {
  var baseUrl: String
  var actions: [String : Action] = [:]
  var actionObservers: [Action]?
  var operations: [String : Operation] = [:]
  var logger: Logger?
  var urlBuilder: UrlBuilder?
  var httpClient: HttpClient?
  var viewClient: ViewClient?
  var idManager: IdManager?
}

struct CoreKey: EnvironmentKey {
  static var defaultValue = Core(
    config: ServerDrivenConfig(
      baseUrl: "",
      platform: "iOS",
      actions: nil,
      actionObservers: nil,
      operations: nil,
      logger: nil,
      urlBuilder: nil,
      httpClient: nil,
      viewClient: nil,
      idManager: nil)
  )
}

extension EnvironmentValues {
  var core: Core {
    get { self[CoreKey.self] }
    set { self[CoreKey.self] = newValue }
  }
}

struct CorePreferenceKey: PreferenceKey {
  static var defaultValue: Core = CoreKey.defaultValue
  static func reduce(value: inout Core, nextValue: () -> Core) {
    value = nextValue()
  }
}

extension View {
  public func core(perform: @escaping (NimbusCore.Nimbus) -> Void) -> some View {
    onPreferenceChange(CorePreferenceKey.self, perform: perform)
  }
}
