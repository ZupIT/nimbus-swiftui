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

import XCTest
@testable import NimbusCore
@testable import NimbusSwiftUI

class OpenUrlTests: XCTestCase {
  
  func testOpenUrl() {
    let url = "schema://url"
    let spy = SpyOpener()
    NimbusSwiftUI.opener = spy
    let result = openUrl(ActionEvent(
      action: OpenActionMock(url),
      name: "openUrl",
      node: RenderNode(id: "mock", component: "mock"),
      view: ServerDrivenView(nimbusInstance: Nimbus(), getNavigator: {
        NavigatorStub()
      }, description: nil)
    ))
    
    XCTAssertNil(result)
    XCTAssertEqual(spy.canOpenURLParam, URL(string: url))
    XCTAssertEqual(spy.openURLParam, URL(string: url))
    
    NimbusSwiftUI.opener = UIApplication.shared
  }

}

class SpyOpener: UrlOpener {
  var canOpenURLParam: URL?
  var openURLParam: URL?
  
  func canOpenURL(_ url: URL) -> Bool {
    canOpenURLParam = url
    return true
  }
  
  func openURL(_ url: URL) -> Bool {
    openURLParam = url
    return true
  }
}

class OpenActionMock: ServerDrivenAction {
  var action: String = "openUrl"
  var metadata: [String : Any]? = [:]
  var properties: [String : Any]?
  
  init(_ url: String) {
    properties = ["url": url]
  }
}

class NavigatorStub: ServerDrivenNavigator {
  func dismiss() {}
  
  func pop() {}
  
  func popTo(url: String) {}
  
  func present(request: ViewRequest) {}
  
  func push(request: ViewRequest) {}
  
}
