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
import SwiftUI
import SnapshotTesting
import NimbusSwiftUI

class NimbusSwiftUITests: XCTestCase {
  
  func testNimbus() {
    let view = Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "material:text",
        "properties": {
          "text": "hello!"
        }
      }
      """)
    }
      .ui([myAppUI])
      .frame(width: 100, height: 100)
    
    assertSnapshot(matching: view, as: .image)
  }
  
  func testComponentNotFound() {
    let view = Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "text"
      }
      """)
    }
      .ui([myAppUI])
      .frame(width: 200, height: 100)
    
    assertSnapshot(matching: view, as: .image)
  }
  
  func testDecoderError() {
    let view = Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "material:text"
      }
      """)
    }
      .ui([myAppUI])
      .frame(width: 200, height: 100)
    
    assertSnapshot(matching: view, as: .image)
  }

}

struct TextComponent: ViewDecodable {
  var text: String
  var body: some View {
    Text(text)
  }
}

let myAppUI = NimbusSwiftUILibrary("material")
  .addComponent("text", TextComponent.self)
