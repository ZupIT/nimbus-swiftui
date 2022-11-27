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
import SwiftUI

import NimbusCore
@testable import NimbusSwiftUI

class SwiftUIWrappersTests: XCTestCase {
  
  func testDecodeState() throws {
    struct ComponentModel: ViewDecodable {
      @State var url: URL
      @State var string: String?
      
      var body: some View {
        Text("dummy")
      }
    }
    
    let component = try NimbusDecoder.decode(ComponentModel.self, from: ["url": "url"])
    XCTAssertEqual(component.url, URL(string: "url")!)
    XCTAssertNil(component.string)
  }
  
  func testDecodeDefaultImpl() throws {
    XCTAssertThrowsError(try State<String>(from: DummyDecoder())) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Unimplemented. Make sure this value is decoded using a KeyedDecodingContainer.")
    }
  }
  
}
