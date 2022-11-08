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

public protocol OperationDecodable: Decodable {
  static var properties: [String] { get }
}

// MARK: - Extensions
extension State: Decodable where Value: Decodable {
  public init(from decoder: Decoder) throws {
    let container = try decoder.singleValueContainer()
    self.init(initialValue: try container.decode(Value.self))
  }
}

extension Optional where Wrapped == Array<ServerDrivenNode> {
  public var asView: AnyView {
    AnyView(ForEach(self ?? [], id: \.id) { child in
      RenderedNode(observableNode: ObservableNode(child), onError: { _ in AnyView(Text("error")) })
    })
  }
}

@propertyWrapper
public struct Event<T> {
  public var wrappedValue: T
  
  public init(wrappedValue: T) {
    self.wrappedValue = wrappedValue
  }
}

extension Event: Decodable {
  public init(from decoder: Decoder) throws {
    fatalError("ajhsldjfhajlkshdf")
  }
}

@propertyWrapper
public struct Children<Content: View> {
  public var wrappedValue: () -> Content
  
  public init(@ViewBuilder wrappedValue: @escaping () -> Content) {
    self.wrappedValue = wrappedValue
  }
}

extension Children: Decodable {
  public init(from decoder: Decoder) throws {
    fatalError()
  }
}

struct DecError: Error {
  
}

public typealias NimbusComponent = View & Decodable

// MARK: - Decoder
public struct NimbusDecoder {
  
  public static func decode<T: NimbusComponent>(_ type: T.Type, from node: ServerDrivenNode) throws -> AnyView {
    AnyView(try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: node.properties, children: node.children).unwrap(as: T.self))
  }
  
  public static func decode<T: Decodable>(_ type: T.Type, from dictionary: [String: Any]) throws -> T {
    try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: dictionary).unwrap(as: T.self)
  }
  
  public static func decode<T: OperationDecodable>(_ type: T.Type, from array: [Any]) throws -> T {
    var dict: [String: Any] = [:]
    guard T.properties.count <= array.count else { fatalError() }
    for (index, key) in T.properties.enumerated() {
      dict[key] = array[index]
    }
    return try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: dict).unwrap(as: T.self)
  }
}

struct NimbusDecoderImpl: Decoder {
  var codingPath: [CodingKey]
  var userInfo: [CodingUserInfoKey : Any]
  
  var value: Any?
  var children: [ServerDrivenNode]?
  
  func container<Key>(keyedBy type: Key.Type) throws -> KeyedDecodingContainer<Key> where Key : CodingKey {
    let container = KeyedContainer<Key>(impl: self, codingPath: codingPath, dictionary: value as? [String: Any])
    return KeyedDecodingContainer(container)
  }
  
  func unkeyedContainer() throws -> UnkeyedDecodingContainer {
    UnkeyedContainer(impl: self, codingPath: codingPath, array: value as? [Any])
  }
  
  func singleValueContainer() throws -> SingleValueDecodingContainer {
    SingleValueContainer(impl: self, codingPath: codingPath, value: value)
  }
  
  // MARK: Special case handling
  func unwrap<T: Decodable>(as type: T.Type) throws -> T {
    
    if type == Event<() -> Void>.self {
      return unwrapEvent() as! T
    } else if type == Event<(String) -> Void>.self {
      return unwrapEventParameter(String.self) as! T
    } else if type == Children<AnyView>.self {
      return unwrapChildren() as! T
    } else if type == URL.self {
      return try unwrapURL() as! T
    }
      
    return try T(from: self)
  }
  
  func unwrapEvent() -> Event<() -> Void> {
    let event = value as? ServerDrivenEvent
    return Event(wrappedValue: { event?.run() })
  }
  
  func unwrapEventParameter<T>(_ type: T.Type) -> Event<(T) -> Void> {
    let event = value as? ServerDrivenEvent
    return Event(wrappedValue: { value in event?.run(implicitStateValue: value) })
  }
  
  func unwrapChildren() -> Children<AnyView> {
    Children {
      children.asView
    }
  }
  
  func unwrapURL() throws -> URL {
    let container = SingleValueContainer(impl: self, codingPath: self.codingPath, value: value)
    let string = try container.decode(String.self)
    
    guard let url = URL(string: string) else {
      throw DecodingError.dataCorrupted(DecodingError.Context(codingPath: self.codingPath,
                                                              debugDescription: "Invalid URL string."))
    }
    return url
  }
  
}

// MARK: - SingleValueContainer

extension NimbusDecoderImpl {
  struct SingleValueContainer: SingleValueDecodingContainer {
    var impl: NimbusDecoderImpl
    var codingPath: [CodingKey]
    
    var value: Any?
    
    func decodeNil() -> Bool {
      value == nil || value is NSNull
    }
    
    func decode(_ type: Bool.Type) throws -> Bool {
      guard let bool = value as? Bool else {
        throw DecError()
      }
      return bool
    }
    
    func decode(_ type: String.Type) throws -> String {
      guard let string = value as? String else {
        throw DecError()
      }
      return string
    }
    
    func decode(_ type: Double.Type) throws -> Double {
      guard let double = value as? Double else {
        throw DecError()
      }
      return double
    }
    
    func decode(_ type: Float.Type) throws -> Float {
      fatalError()
    }
    
    func decode(_ type: Int.Type) throws -> Int {
      guard let int = value as? Int else {
        throw DecError()
      }
      return int
    }
    
    func decode(_ type: Int8.Type) throws -> Int8 {
      fatalError()
    }
    
    func decode(_ type: Int16.Type) throws -> Int16 {
      fatalError()
    }
    
    func decode(_ type: Int32.Type) throws -> Int32 {
      fatalError()
    }
    
    func decode(_ type: Int64.Type) throws -> Int64 {
      fatalError()
    }
    
    func decode(_ type: UInt.Type) throws -> UInt {
      fatalError()
    }
    
    func decode(_ type: UInt8.Type) throws -> UInt8 {
      fatalError()
    }
    
    func decode(_ type: UInt16.Type) throws -> UInt16 {
      fatalError()
    }
    
    func decode(_ type: UInt32.Type) throws -> UInt32 {
      fatalError()
    }
    
    func decode(_ type: UInt64.Type) throws -> UInt64 {
      fatalError()
    }
    
    func decode<T>(_ type: T.Type) throws -> T where T : Decodable {
      try self.impl.unwrap(as: T.self)
    }
    
  }
}

// MARK: - KeyedContainer

extension NimbusDecoderImpl {
  struct KeyedContainer<K: CodingKey>: KeyedDecodingContainerProtocol {
    typealias Key = K
    
    var impl: NimbusDecoderImpl
    var codingPath: [CodingKey]
    
    var dictionary: [String: Any]?
    
    var allKeys: [K] {
      self.dictionary?.keys.compactMap { K(stringValue: $0) } ?? []
    }
    
    func contains(_ key: K) -> Bool {
      dictionary?[key.stringValue] != nil
    }
    
    func decodeNil(forKey key: K) throws -> Bool {
      let value = try getValue(forKey: key)
      return value is NSNull
    }
    
    func decode(_ type: Bool.Type, forKey key: K) throws -> Bool {
      guard let bool = try getValue(forKey: key) as? Bool else {
        fatalError("type mismatch error")
      }
      return bool
    }
    
    func decode(_ type: String.Type, forKey key: K) throws -> String {
      guard let string = try getValue(forKey: key) as? String else {
        throw DecError()
      }
      return string
    }
    
    func decode(_ type: Double.Type, forKey key: K) throws -> Double {
      guard let double = try getValue(forKey: key) as? Double else {
        throw DecError()
      }
      return double
    }
    
    func decode(_ type: Float.Type, forKey key: K) throws -> Float {
      fatalError()
    }
    
    func decode(_ type: Int.Type, forKey key: K) throws -> Int {
      fatalError()
    }
    
    func decode(_ type: Int8.Type, forKey key: K) throws -> Int8 {
      fatalError()
    }
    
    func decode(_ type: Int16.Type, forKey key: K) throws -> Int16 {
      fatalError()
    }
    
    func decode(_ type: Int32.Type, forKey key: K) throws -> Int32 {
      fatalError()
    }
    
    func decode(_ type: Int64.Type, forKey key: K) throws -> Int64 {
      fatalError()
    }
    
    func decode(_ type: UInt.Type, forKey key: K) throws -> UInt {
      fatalError()
    }
    
    func decode(_ type: UInt8.Type, forKey key: K) throws -> UInt8 {
      fatalError()
    }
    
    func decode(_ type: UInt16.Type, forKey key: K) throws -> UInt16 {
      fatalError()
    }
    
    func decode(_ type: UInt32.Type, forKey key: K) throws -> UInt32 {
      fatalError()
    }
    
    func decode(_ type: UInt64.Type, forKey key: K) throws -> UInt64 {
      fatalError()
    }
    
    func decode(_ type: Children<AnyView>.Type, forKey key: K) throws -> Children<AnyView> {
      fatalError("aqui")
    }
    
    func decode<T>(_ type: T.Type, forKey key: K) throws -> T where T : Decodable {
      if type == Children<AnyView>.self { // dont use key
        return try impl.unwrap(as: T.self)
      }
      
      let newDecoder = try decoderForKey(key)
      return try newDecoder.unwrap(as: T.self)
    }
    
    func nestedContainer<NestedKey>(keyedBy type: NestedKey.Type, forKey key: K) throws -> KeyedDecodingContainer<NestedKey> where NestedKey : CodingKey {
      fatalError()
    }
    
    func nestedUnkeyedContainer(forKey key: K) throws -> UnkeyedDecodingContainer {
      fatalError()
    }
    
    func superDecoder() throws -> Decoder {
      NimbusDecoderImpl(
        codingPath: codingPath,
        userInfo: impl.userInfo,
        value: dictionary
      )
    }
    
    func superDecoder(forKey key: K) throws -> Decoder {
      fatalError()
    }
    
    private func decoderForKey<LocalKey: CodingKey>(_ key: LocalKey) throws -> NimbusDecoderImpl {
      let value = try getValue(forKey: key)
      var newPath = self.codingPath
      newPath.append(key)
      
      return NimbusDecoderImpl(
        codingPath: newPath,
        userInfo: self.impl.userInfo,
        value: value
      )
    }
    
    private func getValue<LocalKey: CodingKey>(forKey key: LocalKey) throws -> Any {
      guard let value = dictionary?[key.stringValue] else {
//        fatalError("key not found")
        return NSNull()
      }

      return value
    }
    
  }
}

// MARK: - UnkeyedContainer

extension NimbusDecoderImpl {
  struct UnkeyedContainer: UnkeyedDecodingContainer {
    var impl: NimbusDecoderImpl
    var codingPath: [CodingKey]
    var array: [Any]?
    
    var count: Int? { array?.count }
    var isAtEnd: Bool { currentIndex >= count ?? 0 }
    var currentIndex = 0
    
    mutating func decodeNil() throws -> Bool {
      fatalError()
    }
    
    mutating func decode(_ type: Bool.Type) throws -> Bool {
      fatalError()
    }
    
    mutating func decode(_ type: String.Type) throws -> String {
      fatalError()
    }
    
    mutating func decode(_ type: Double.Type) throws -> Double {
      fatalError()
    }
    
    mutating func decode(_ type: Float.Type) throws -> Float {
      fatalError()
    }
    
    mutating func decode(_ type: Int.Type) throws -> Int {
      fatalError()
    }
    
    mutating func decode(_ type: Int8.Type) throws -> Int8 {
      fatalError()
    }
    
    mutating func decode(_ type: Int16.Type) throws -> Int16 {
      fatalError()
    }
    
    mutating func decode(_ type: Int32.Type) throws -> Int32 {
      fatalError()
    }
    
    mutating func decode(_ type: Int64.Type) throws -> Int64 {
      fatalError()
    }
    
    mutating func decode(_ type: UInt.Type) throws -> UInt {
      fatalError()
    }
    
    mutating func decode(_ type: UInt8.Type) throws -> UInt8 {
      fatalError()
    }
    
    mutating func decode(_ type: UInt16.Type) throws -> UInt16 {
      fatalError()
    }
    
    mutating func decode(_ type: UInt32.Type) throws -> UInt32 {
      fatalError()
    }
    
    mutating func decode(_ type: UInt64.Type) throws -> UInt64 {
      fatalError()
    }
    
    mutating func decode<T>(_ type: T.Type) throws -> T where T : Decodable {
      let newDecoder = try decoderForNextElement(ofType: T.self)
      let result = try newDecoder.unwrap(as: T.self)
      
      currentIndex += 1
      return result
    }
    
    mutating func nestedContainer<NestedKey>(keyedBy type: NestedKey.Type) throws -> KeyedDecodingContainer<NestedKey> where NestedKey : CodingKey {
      fatalError()
    }
    
    mutating func nestedUnkeyedContainer() throws -> UnkeyedDecodingContainer {
      fatalError()
    }
    
    mutating func superDecoder() throws -> Decoder {
      fatalError()
    }
    
    private mutating func decoderForNextElement<T>(ofType: T.Type) throws -> NimbusDecoderImpl {
      let value = try self.getNextValue(ofType: T.self)
      let newPath = self.codingPath// + [_JSONKey(index: self.currentIndex)]
      
      return NimbusDecoderImpl(
        codingPath: newPath,
        userInfo: self.impl.userInfo,
        value: value
      )
    }
    
    private func getNextValue<T>(ofType: T.Type) throws -> Any {
      guard !self.isAtEnd else {
        var message = "Unkeyed container is at end."
        if T.self == UnkeyedContainer.self {
          message = "Cannot get nested unkeyed container -- unkeyed container is at end."
        }
        if T.self == Decoder.self {
          message = "Cannot get superDecoder() -- unkeyed container is at end."
        }
        
        var path = self.codingPath
//        path.append(_JSONKey(index: self.currentIndex))
        
        throw DecodingError.valueNotFound(
          T.self,
          .init(codingPath: path,
                debugDescription: message,
                underlyingError: nil))
      }
      return array?[self.currentIndex] ?? NSNull()
    }
    
  }
}
