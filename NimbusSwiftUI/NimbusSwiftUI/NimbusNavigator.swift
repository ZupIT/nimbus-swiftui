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

/// A View that describes a server-driven flow.
///
/// `NimbusNavigator` expects a ``Nimbus`` passed as an environmentObject somewhere up in the hierarchy. Sample:
///
/// ```swift
/// struct ContentView: View {
///   var body: some View {
///     NimbusNavigator(url: "/screen1.json")
///     .environmentObject(
///       Nimbus(
///         baseUrl: "https://baseurlhost",
///         components: components
///       )
///     )
///   }
/// }
/// ```
///
public struct NimbusNavigator: View {
  
  @EnvironmentObject private var config: Nimbus
  
  private let mode: Mode
  
  enum Mode {
    case remote(request: ViewRequest)
    case local(json: String)
  }
  
  /// Creates a `NimbusNavigator` and starts with a url as initial server-driven view.
  /// - Parameter url: initial url
  public init(url: String) {
    mode = .remote(request: ViewRequest(url))
  }
  
  /// Creates a `NimbusNavigator` and starts with a custom request.
  /// - Parameter request: custom request
  ///
  /// Sample:
  /// ```swift
  /// NimbusNavigator(request:
  ///   ViewRequest(
  ///     url: "/screen1.json",
  ///     method: .get,
  ///     headers: ["customHeader", "customValue"],
  ///     body: ["body": "value"],
  ///     fallback: nil
  ///   )
  /// )
  /// ```
  ///
  public init(request: ViewRequest) {
    mode = .remote(request: request)
  }
  
  /// Creates a `NimbusNavigator` and starts with a json `String`.
  /// - Parameter json: initial json
  ///
  /// Sample:
  /// ```swift
  /// NimbusNavigator(json: """
  /// {
  ///   "_:component": "material:text",
  ///   "properties": {
  ///     "text": "Hello World!"
  ///   }
  /// }
  /// """)
  /// ```
  ///
  public init(json: String) {
    mode = .local(json: json)
  }
  
  public var body: some View {
    NavigationView {
      NimbusView(viewModel: ViewModel(mode: mode, core: config.core))
    }
    .navigationViewStyle(.stack)
  }
}
