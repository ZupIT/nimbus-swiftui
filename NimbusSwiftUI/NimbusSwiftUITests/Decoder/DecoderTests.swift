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

class DecoderTests: XCTestCase {
  
  func testDecodeComponent() throws {
    struct ComponentModel: NimbusComponent, Equatable {
      var values: [String: String]
      
      var body: some View {
        Text("dict: \(String(describing: values))")
      }
    }
    
    let view = try NimbusDecoder.decode(ComponentModel.self, from: DynamicNode.componentModelMock)
    assertSnapshot(matching: view, as: .dump)
  }
  
  func testDecodeAction() throws {
    struct ActionModel: Decodable {
      var values: [URL]
    }
    
    let action = try NimbusDecoder.decode(ActionModel.self, from: ["values": ["url1", "url2"]])
    assertSnapshot(matching: action, as: .dump)
  }
  
  func testDecodeOperation() throws {
    struct OperationModel: OperationDecodable {
      var value1: Int
      var value2: String
      static let properties = ["value1", "value2"]
    }
    
    let operation = try NimbusDecoder.decode(OperationModel.self, from: [1, "string2"])
    assertSnapshot(matching: operation, as: .dump)
  }
  
  func testDecodeOperationError() throws {
    struct OperationModel: OperationDecodable {
      var value1: Int
      var value2: String
      static let properties = ["value1", "value2", "value3"]
    }
    
    XCTAssertThrowsError(try NimbusDecoder.decode(OperationModel.self, from: [1, "string2"])) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Invalid properties array.")
    }
  }
  
  func testDecodeURL() throws {
    let url = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: "schema://url").unwrap(as: URL.self)
    XCTAssertEqual(url, URL(string: "schema://url"))
  }
  
  func testDecodeInvalidURL() throws {
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: "é").unwrap(as: URL.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Invalid URL string.")
    }
  }
  
  func testDecodeSingleValue() throws {
    let `nil` = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: nil).unwrap(as: Optional<Bool>.self)
    XCTAssertEqual(`nil`, nil)
    
    let nilObject = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: NSNull()).unwrap(as: Optional<Bool>.self)
    XCTAssertEqual(nilObject, nil)
    
    let bool = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: true).unwrap(as: Bool.self)
    XCTAssertEqual(bool, true)
    
    let string = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: "string").unwrap(as: String.self)
    XCTAssertEqual(string, "string")
    
    let stringDouble = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: 1.1).unwrap(as: String.self)
    XCTAssertEqual(stringDouble, "\(1.1)")
    
    let doubleValue: Double = 1.1
    let double = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: doubleValue).unwrap(as: Double.self)
    XCTAssertEqual(double, doubleValue)
    
    let float = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: doubleValue).unwrap(as: Float.self)
    XCTAssertEqual(float, Float(doubleValue))
    
    let intValue = 1
    let int = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: Int.self)
    XCTAssertEqual(int, intValue)
    
    let uint = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: UInt.self)
    XCTAssertEqual(uint, UInt(intValue))
    
    let int8 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: Int8.self)
    XCTAssertEqual(int8, Int8(intValue))
    
    let uint8 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: UInt8.self)
    XCTAssertEqual(uint8, UInt8(intValue))
    
    let int16 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: Int16.self)
    XCTAssertEqual(int16, Int16(intValue))
    
    let uint16 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: UInt16.self)
    XCTAssertEqual(uint16, UInt16(intValue))
    
    let int32 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: Int32.self)
    XCTAssertEqual(int32, Int32(intValue))
    
    let uint32 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: UInt32.self)
    XCTAssertEqual(uint32, UInt32(intValue))
    
    let int64 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: Int64.self)
    XCTAssertEqual(int64, Int64(intValue))
    
    let uint64 = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: intValue).unwrap(as: UInt64.self)
    XCTAssertEqual(uint64, UInt64(intValue))
    
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:], value: "url")
    let container = NimbusDecoderImpl.SingleValueContainer(impl: impl, codingPath: [])
    let url = try container.decode(URL.self)
    XCTAssertEqual(url, URL(string: "url")!)
  }
  
  func testDecodeSingleValueErrors() throws {
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: 2).unwrap(as: Bool.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Expected to decode Bool but found Optional<Any> instead.")
    }
    
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: nil).unwrap(as: String.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Expected to decode String but found Optional<Any> instead.")
    }
    
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: true).unwrap(as: Double.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Expected to decode Double but found Optional<Any> instead.")
    }
    
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: "int").unwrap(as: Int.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Expected to decode Int but found Optional<Any> instead.")
    }
  }
  
  func testDecodeKeyedValue() throws {
    struct Model: Decodable, Equatable {
      var `nil`: Bool?
      var bool: Bool
      var string: String
      var double: Double
      var float: Float
      var int: Int
      var uint: UInt
      var int8: Int8
      var uint8: UInt8
      var int16: Int16
      var uint16: UInt16
      var int32: Int32
      var uint32: UInt32
      var int64: Int64
      var uint64: UInt64
    }
    
    let doubleValue: Double = 1.1
    let intValue: Int = 1
    let properties: [String: Any] = [
      "nil": NSNull(),
      "bool": false,
      "string": "string",
      "double": doubleValue,
      "float": doubleValue,
      "int": intValue,
      "uint": intValue,
      "int8": intValue,
      "uint8": intValue,
      "int16": intValue,
      "uint16": intValue,
      "int32": intValue,
      "uint32": intValue,
      "int64": intValue,
      "uint64": intValue
    ]
    
    let object = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: properties).unwrap(as: Model.self)
    XCTAssertEqual(object, Model(
      bool: false,
      string: "string",
      double: 1.1,
      float: 1.1,
      int: 1,
      uint: 1,
      int8: 1,
      uint8: 1,
      int16: 1,
      uint16: 1,
      int32: 1,
      uint32: 1,
      int64: 1,
      uint64: 1)
    )
  }

  func testDecodeKeyedNestedKeyed() throws {
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:])
    let container = NimbusDecoderImpl.KeyedContainer<DictionaryKey>(impl: impl, codingPath: [], dictionary: ["nested": ["key1": "value1"]])
    
    let nested = try container.nestedContainer(keyedBy: DictionaryKey.self, forKey: "nested")
    let value = try nested.decode(String.self, forKey: "key1")
    
    XCTAssertEqual(value, "value1")
  }
  
  func testDecodeKeyedNestedUnkeyed() throws {
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:])
    let container = NimbusDecoderImpl.KeyedContainer<DictionaryKey>(impl: impl, codingPath: [], dictionary: ["nested": ["value1"]])
    
    var nested = try container.nestedUnkeyedContainer(forKey: "nested")
    let value = try nested.decode(String.self)
    
    XCTAssertEqual(value, "value1")
  }
  
  func testDecodeKeyedSuper() throws {
    class Base: Decodable {
      var id: String
    }
    class Model: Base {
      var value: Int
      
      required init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: DictionaryKey.self)
        value = try container.decode(Int.self, forKey: "value")
        try super.init(from: container.superDecoder())
      }
    }
    
    let model = try NimbusDecoder.decode(Model.self, from: ["id": "1", "value": 1])
    XCTAssertEqual(model.id, "1")
    XCTAssertEqual(model.value, 1)
  }
  
  func testDecodeKeyedSuperForKey() throws {
    class Base: Decodable {
      var id: String
    }
    class Model: Base {
      var value: Int
      
      required init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: DictionaryKey.self)
        value = try container.decode(Int.self, forKey: "value")
        try super.init(from: container.superDecoder(forKey: "super"))
      }
    }
    
    let model = try NimbusDecoder.decode(Model.self, from: ["super": ["id": "1"], "value": 1])
    XCTAssertEqual(model.id, "1")
    XCTAssertEqual(model.value, 1)
    
    XCTAssertThrowsError(try NimbusDecoder.decode(Model.self, from: ["value": 1])) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "No value associated with key CodingKeys(stringValue: \"id\", intValue: nil) (\"id\").")
    }
  }
  
  func testDecodeKeyedValueErros() throws {
    struct Model: Decodable {
      var value: String
    }
    
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: [:]).unwrap(as: Model.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "No value associated with key CodingKeys(stringValue: \"value\", intValue: nil) (\"value\").")
    }
    
    XCTAssertThrowsError(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: ["value": NSNull()]).unwrap(as: Model.self)) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Expected to decode String but found Optional<Any> instead.")
    }
  }
  
  func testDecodeUnkeyedValue() throws {
    let empty = try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: []).unwrap(as: [Bool].self)
    XCTAssertEqual(empty, [])
    
    try testUnkeyedContainer(array: [NSNull()], reference: true) { try $0.decodeNil() }
    try testUnkeyedContainer(array: [1], reference: false) { try $0.decodeNil() }
    try testUnkeyedContainer(array: [true], reference: true) { try $0.decode(Bool.self) }
    try testUnkeyedContainer(array: ["string"], reference: "string") { try $0.decode(String.self) }
    
    let doubleValue: Double = 1.1
    try testUnkeyedContainer(array: [doubleValue], reference: doubleValue) { try $0.decode(Double.self) }
    try testUnkeyedContainer(array: [doubleValue], reference: Float(doubleValue)) { try $0.decode(Float.self) }
    
    let intValue = 1
    try testUnkeyedContainer(array: [intValue], reference: intValue) { try $0.decode(Int.self) }
    try testUnkeyedContainer(array: [intValue], reference: UInt(intValue)) { try $0.decode(UInt.self) }
    
    try testUnkeyedContainer(array: [intValue], reference: Int8(intValue)) { try $0.decode(Int8.self) }
    try testUnkeyedContainer(array: [intValue], reference: UInt8(intValue)) { try $0.decode(UInt8.self) }
    
    try testUnkeyedContainer(array: [intValue], reference: Int16(intValue)) { try $0.decode(Int16.self) }
    try testUnkeyedContainer(array: [intValue], reference: UInt16(intValue)) { try $0.decode(UInt16.self) }
    
    try testUnkeyedContainer(array: [intValue], reference: Int32(intValue)) { try $0.decode(Int32.self) }
    try testUnkeyedContainer(array: [intValue], reference: UInt32(intValue)) { try $0.decode(UInt32.self) }
    
    try testUnkeyedContainer(array: [intValue], reference: Int64(intValue)) { try $0.decode(Int64.self) }
    try testUnkeyedContainer(array: [intValue], reference: UInt64(intValue)) { try $0.decode(UInt64.self) }
    
  }
  
  func testDecodeUnkeyedNestedKeyed() throws {
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:])
    var container = NimbusDecoderImpl.UnkeyedContainer(impl: impl, codingPath: [], array: [["key1": "value1"]])
    
    let nested = try container.nestedContainer(keyedBy: DictionaryKey.self)
    let value = try nested.decode(String.self, forKey: "key1")
    
    XCTAssertEqual(value, "value1")
  }
  
  func testDecodeUnkeyedNestedUnkeyed() throws {
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:])
    var container = NimbusDecoderImpl.UnkeyedContainer(impl: impl, codingPath: [], array: [["value1"]])
    
    var nested = try container.nestedUnkeyedContainer()
    let value = try nested.decode(String.self)
    
    XCTAssertEqual(value, "value1")
  }
  
  func testDecodeUnkeyedSuper() throws {
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:])
    var container = NimbusDecoderImpl.UnkeyedContainer(impl: impl, codingPath: [], array: [["value1"]])
    
    let `super` = try container.superDecoder()
    let array = try Array<String>(from: `super`)
    
    XCTAssertEqual(array, ["value1"])
  }
  
  func testDecodeUnkeyedErrors() throws {
    XCTAssertThrowsError(try testUnkeyedContainer(array: [], reference: true) { try $0.decode(Bool.self) }) { error in
      XCTAssertEqual(extractContext(from: error)?.debugDescription, "Unkeyed container is at end.")
    }
  }
  
  private func testUnkeyedContainer<T: Equatable>(array: [Any], reference: T, execute: (inout UnkeyedDecodingContainer) throws -> T) throws {
    let impl = NimbusDecoderImpl(codingPath: [], userInfo: [:])
    var container: UnkeyedDecodingContainer = NimbusDecoderImpl.UnkeyedContainer(impl: impl, codingPath: [], array: array)
    let decoded = try execute(&container)
    XCTAssertEqual(decoded, reference)
  }
  
}

extension DynamicNode {
  static let componentModelMock = DynamicNode(
    id: "0",
    component: "componentModel",
    properties: [
      "values": [
        "key1": "value1"
      ]
    ]
  )
}

func extractContext(from error: Error) -> DecodingError.Context? {
  switch (error as! DecodingError) {
  case let .typeMismatch(_, context), let .dataCorrupted(context), let .keyNotFound(_, context), let .valueNotFound(_, context):
    return context
  @unknown default:
    return nil
  }
}
