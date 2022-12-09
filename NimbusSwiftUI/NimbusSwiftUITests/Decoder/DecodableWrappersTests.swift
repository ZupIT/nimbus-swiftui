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
import SnapshotTesting

class DecodableWrappersTests: XCTestCase {
  
  func testDecodeChildren() throws {
    let view = Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "childrenTest:container",
        "children": [
          {
            "_:component": "childrenTest:text",
            "properties": { "text": "text1" }
          },
          {
            "_:component": "childrenTest:text",
            "properties": { "text": "text2" }
          }
        ]
      }
      """)
    }
      .ui([childrenTest])
      .frame(width: 100, height: 100)

    assertSnapshot(matching: view, as: .image)
  }

  func testDecodeEvent() {
    eventExpectation = nil
    statefulEventExpectation = nil
    
    eventExpectation = expectation(description: "event expectation")
    statefulEventExpectation = expectation(description: "statelfulEvent expectation")
    
    let view = Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "eventTest:component",
        "properties": {
          "event": [
            {
              "_:action": "eventTest:action"
            }
          ],
          "statefulEvent": [
            {
              "_:action": "eventTest:actionParameter",
              "properties": {
                "value": "@{statefulEvent}"
              }
            }
          ]
        }
      }
      """)
    }
      .ui([eventTest])
      .frame(width: 100, height: 100)
    
    assertSnapshot(matching: view, as: .image)
    
    wait(for: [eventExpectation!, statefulEventExpectation!], timeout: 3)
  }
  
  func testDecodeActionDependency() {
    let view = Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "actionDependency:component",
        "properties": {
          "event": [
            {
              "_:action": "actionDependency:action"
            }
          ]
        }
      }
      """)
    }
      .ui([actionDependency])
      .frame(width: 100, height: 100)
      .core { core in
        core.set(key: "dependency", value: "Dependency")
      }
    
    assertSnapshot(matching: view, as: .image)
  }
  
  func testDecodeEmptyAction() throws {
    let container = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: [:]).container(keyedBy: DictionaryKey.self)
    
    let event = try container.decode(Event.self, forKey: "event")
    event.wrappedValue()
    XCTAssertNotNil(event)
    
    let statefulEvent = try container.decode(StatefulEvent<String>.self, forKey: "event")
    statefulEvent.wrappedValue("dummy")
    XCTAssertNotNil(statefulEvent)
  }
  
  func testWrapperErrors() throws {
    XCTAssertThrowsError(try Children<AnyView>(from: DummyDecoder())) { error in
      XCTAssertEqual(
        extractContext(from: error)?.debugDescription,
        "The children cannot be configured. Make sure this value is decoded using NimbusDecoder."
      )
    }
    
    XCTAssertThrowsError(try Event(from: DummyDecoder())) { error in
      XCTAssertEqual(
        extractContext(from: error)?.debugDescription,
        "The event cannot be configured. Make sure this value is decoded using NimbusDecoder."
      )
    }
    
    XCTAssertThrowsError(try StatefulEvent<String>(from: DummyDecoder())) { error in
      XCTAssertEqual(
        extractContext(from: error)?.debugDescription,
        "The event cannot be configured. Make sure this value is decoded using NimbusDecoder."
      )
    }
    
    XCTAssertThrowsError(try AnyServerDrivenEvent(from: DummyDecoder())) { error in
      XCTAssertEqual(
        extractContext(from: error)?.debugDescription,
        "The event cannot be configured. Make sure this value is decoded using NimbusDecoder."
      )
    }
    
    XCTAssertThrowsError(try CoreAction(from: DummyDecoder())) { error in
      XCTAssertEqual(
        extractContext(from: error)?.debugDescription,
        "The action cannot be configured. Make sure this value is decoded using NimbusDecoder."
      )
    }
    
    XCTAssertThrowsError(try NimbusDecoder.decode(ActionDependency.self, from: [:])) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "ActionTriggeredEvent not found.")
    }
  }
}

// MARK: - Children

private struct Container<Content: View>: ViewDecodable {
  @Children
  var children: () -> Content
  
  var body: some View {
    children()
  }
}

private let childrenTest = NimbusSwiftUILibrary("childrenTest")
  .addComponent("text") { node in
    AnyView(Text(node.properties?["text"] as? String ?? ""))
  }
  .addComponent("container", Container<AnyView>.self)

// MARK: - Event

struct EventComponent: ViewDecodable {
  @Event var event: () -> Void
  @StatefulEvent var statefulEvent: (String) -> Void
  
  var body: some View {
    Text("dummy")
      .onAppear {
        event()
        statefulEvent("parameter")
      }
  }
}

private var eventExpectation: XCTestExpectation?
private var statefulEventExpectation: XCTestExpectation?

struct Action: ActionDecodable {
  func execute() {
    eventExpectation?.fulfill()
  }
}
struct ActionParameter: ActionDecodable {
  var value: String?
  
  func execute() {
    if value == "parameter" { statefulEventExpectation?.fulfill() }
  }
}

private let eventTest = NimbusSwiftUILibrary("eventTest")
  .addAction("action", Action.self)
  .addAction("actionParameter", ActionParameter.self)
  .addComponent("component", EventComponent.self)

// MARK: - ActionDependency
struct ActionDependencyComponent: ViewDecodable {
  @Event var event: () -> Void
  
  var body: some View {
    Text("dependency")
      .onAppear {
        event()
      }
  }
}

struct ActionDependency: ActionDecodable {
  @CoreAction var action: ActionTriggeredEvent
  
  func execute() {
    XCTAssertEqual(action.scope.get(key: "dependency") as! String, "Dependency")
  }
}

private let actionDependency = NimbusSwiftUILibrary("actionDependency")
  .addAction("action", ActionDependency.self)
  .addComponent("component", ActionDependencyComponent.self)

// MARK: - Errors

struct DummyDecoder: Decoder {
  var codingPath: [CodingKey] = []
  var userInfo: [CodingUserInfoKey: Any] = [:]
  
  func container<Key>(keyedBy type: Key.Type) throws -> KeyedDecodingContainer<Key> where Key: CodingKey {
    fatalError("unimplemented")
  }
  
  func unkeyedContainer() throws -> UnkeyedDecodingContainer {
    fatalError("unimplemented")
  }
  
  func singleValueContainer() throws -> SingleValueDecodingContainer {
    fatalError("unimplemented")
  }
  
}
