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

import XCTest
import NimbusCore

// MARK: - Nimbus init
extension NimbusCore.Nimbus {
  convenience init(viewClient: ViewClient = ViewClientDummy()) {
    self.init(
      config: ServerDrivenConfig(
        baseUrl: "base",
        platform: "iOS",
        ui: nil,
        coreUILibrary: nil,
        logger: LoggerDummy(),
        urlBuilder: { _ in UrlBuilderDummy() },
        httpClient: HttpClientDummy(),
        viewClient: { _ in viewClient },
        idManager: IdManagerDummy(),
        states: nil
      )
    )
  }
}

// MARK: - Node mocks

extension DynamicNode {
  convenience init(
      id: String,
      component: String,
      properties: [String: Any]? = nil,
      children: [DynamicNode]? = nil
    ) {
      self.init(
        id: id,
        component: component,
        states: nil,
        polymorphic: false
      )
      self.properties = properties
      self.children = children
    }
  
  static let text = DynamicNode(
      id: "0",
      component: "material:text",
      properties: [
        "text": "value"
      ]
    )
}
  
// MARK: - Dependencies

class LoggerDummy: Logger {
  func disable() { }
  
  func enable() { }
  
  func error(message: String) { }
  
  func info(message: String) { }
  
  func log(message: String, level: LogLevel) { }
  
  func warn(message: String) { }
}

class UrlBuilderDummy: UrlBuilder {
  func build(path: String) -> String {
    "buildedUrl"
  }
}

class HttpClientDummy: HttpClient {
  func sendRequest(request: ServerDrivenRequest) async throws -> ServerDrivenResponse {
    ServerDrivenResponse(status: 200, body: "dummy", headers: [:], bodyBytes: KotlinByteArray(size: 0))
  }
}

class ViewClientDummy: ViewClient {
  func fetch(request: ViewRequest) async throws -> RootNode {
    return RootNode()
  }
  
  func preFetch(request: ViewRequest) { }
}

class IdManagerDummy: IdManager {
  func next() -> String {
    "next"
  }
}
