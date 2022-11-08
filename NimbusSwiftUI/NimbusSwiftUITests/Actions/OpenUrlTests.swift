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
@testable import NimbusSwiftUI

class OpenUrlTests: XCTestCase {
  
  func testOpenUrl() {
    let url = "schema://url"
    let spy = SpyOpener()
    opener = spy
    openUrl(OpenUrl(url: URL(string: url)!))
    
    XCTAssertEqual(spy.canOpenURLParam, URL(string: url))
    XCTAssertEqual(spy.openURLParam, URL(string: url))
    
    opener = UIApplication.shared
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
