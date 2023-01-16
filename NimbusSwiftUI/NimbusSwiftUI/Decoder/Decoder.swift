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

import SwiftUI

public protocol ActionDecodable: Decodable {
  func execute()
}

public protocol OperationDecodable: Decodable {
  associatedtype Return
  func execute() -> Return
  
  static var properties: [String] { get }
}

public typealias ViewDecodable = View & Decodable

// MARK: - Decoder
struct NimbusDecoder {
  
  static func decode<T: Decodable>(_ type: T.Type, from dictionary: [String: Any]) throws -> T {
    try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: dictionary).unwrap(as: T.self)
  }
  
  static func decode<T: ViewDecodable>(_ type: T.Type, from node: ServerDrivenNode) throws -> AnyView {
    AnyView(
      try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: node.properties, children: node.children
    ).unwrap(as: T.self))
  }
  
  static func decode<T: ActionDecodable>(_ type: T.Type, from action: ActionTriggeredEvent) throws -> T {
    try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: action.action.properties, action: action).unwrap(as: T.self)
  }
  
  static func decode<T: OperationDecodable>(_ type: T.Type, from array: [Any]) throws -> T {
    try NimbusDecoderImpl(codingPath: [], userInfo: [:], value: operationDictionary(from: array, type: type)).unwrap(as: T.self)
  }
  
  private static func operationDictionary<T: OperationDecodable>(from array: [Any], type: T.Type) throws -> [String: Any] {
    var dict: [String: Any] = [:]
    guard T.properties.count <= array.count else {
      throw DecodingError.dataCorrupted(DecodingError.Context(codingPath: [], debugDescription: "Invalid properties array."))
    }
    for (index, key) in T.properties.enumerated() {
      dict[key] = array[index]
    }
    return dict
  }
}

struct NimbusDecoderImpl: Decoder {
  var codingPath: [CodingKey]
  var userInfo: [CodingUserInfoKey: Any]
  
  var value: Any?
  var children: [ServerDrivenNode]?
  
  var action: ActionTriggeredEvent?
  
  func container<Key>(keyedBy type: Key.Type) throws -> KeyedDecodingContainer<Key> where Key: CodingKey {
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
    // swiftlint:disable force_cast
    if type == AnyServerDrivenEvent.self {
      return unwrapAnyEvent() as! T
    }
    if type == Children<AnyView>.self {
      return unwrapChildren() as! T
    }
    if type == CoreAction.self {
      return try unwrapCoreAction() as! T
    }
    if type == URL.self {
      return try unwrapURL() as! T
    }
    // swiftlint:enable force_cast
    return try T(from: self)
  }
  
  func unwrapAnyEvent() -> AnyServerDrivenEvent {
    AnyServerDrivenEvent(value: value as? ServerDrivenEvent)
  }
  
  func unwrapChildren() -> Children<AnyView> {
    Children {
      children.asView
    }
  }
  
  func unwrapCoreAction() throws -> CoreAction {
    guard let action = action else {
      throw DecodingError.dataCorrupted(DecodingError.Context(codingPath: codingPath,
                                                              debugDescription: "ActionTriggeredEvent not found."))
    }
    return CoreAction(wrappedValue: action)
  }
  
  func unwrapURL() throws -> URL {
    let container = SingleValueContainer(impl: self, codingPath: codingPath, value: value)
    let string = try container.decode(String.self)
    
    guard let url = URL(string: string) else {
      throw DecodingError.dataCorrupted(DecodingError.Context(codingPath: codingPath,
                                                              debugDescription: "Invalid URL string."))
    }
    return url
  }
  
  func unwrapBool(
    from value: Any?,
    for additionalKey: CodingKey? = nil
  ) throws -> Bool {
    guard let bool = value as? Bool else {
      throw createTypeMismatchError(Bool.self, for: additionalKey, value: value)
    }
    
    return bool
  }
  
  func unwrapString(
    from value: Any?,
    for additionalKey: CodingKey? = nil
  ) throws -> String {
    if value == nil || value is NSNull {
      throw createTypeMismatchError(String.self, for: additionalKey, value: value)
    }
    
    return "\(value!)"
  }
  
  func unwrapFloatingPoint<T: LosslessStringConvertible & BinaryFloatingPoint>(
    from value: Any?,
    for additionalKey: CodingKey? = nil,
    as type: T.Type = T.self
  ) throws -> T {
    if let number = value as? Double {
      return T(number)
    }
    if let number = value as? String, let result = T(number) {
      return result
    }

    throw createTypeMismatchError(T.self, for: additionalKey, value: value)
  }
  
  func unwrapFixedWidthInteger<T: FixedWidthInteger>(
    from value: Any?,
    for additionalKey: CodingKey? = nil,
    as type: T.Type = T.self
  ) throws -> T {
    if let number = value as? Int {
      return T(number)
    }
    if let number = value as? Double {
      return T(number)
    }
    if let number = value as? String, let doubleValue = Double(number) {
      return T(doubleValue)
    }

    throw createTypeMismatchError(T.self, for: additionalKey, value: value)
  }
  
  func createTypeMismatchError(_ returnType: Any.Type, for additionalKey: CodingKey? = nil, value: Any?) -> DecodingError {
    var path = codingPath
    if let additionalKey = additionalKey {
      path.append(additionalKey)
    }
    
    return DecodingError.typeMismatch(returnType, .init(
      codingPath: path,
      debugDescription: "Expected to decode \(returnType) but found \(type(of: value)) instead."
    ))
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
      try impl.unwrapBool(from: value)
    }
    
    func decode(_ type: String.Type) throws -> String {
      try impl.unwrapString(from: value)
    }
    
    func decode(_ type: Double.Type) throws -> Double {
      try impl.unwrapFloatingPoint(from: value)
    }
    
    func decode(_ type: Float.Type) throws -> Float {
      try impl.unwrapFloatingPoint(from: value)
    }
    
    func decode(_ type: Int.Type) throws -> Int {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: Int8.Type) throws -> Int8 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: Int16.Type) throws -> Int16 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: Int32.Type) throws -> Int32 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: Int64.Type) throws -> Int64 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: UInt.Type) throws -> UInt {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: UInt8.Type) throws -> UInt8 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: UInt16.Type) throws -> UInt16 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: UInt32.Type) throws -> UInt32 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode(_ type: UInt64.Type) throws -> UInt64 {
      try impl.unwrapFixedWidthInteger(from: value)
    }
    
    func decode<T>(_ type: T.Type) throws -> T where T: Decodable {
      try impl.unwrap(as: T.self)
    }
    
  }
}

// MARK: - KeyedContainer

extension NimbusDecoderImpl {
  struct KeyedContainer<K: CodingKey>: KeyedDecodingContainerProtocol {
    
    var impl: NimbusDecoderImpl
    var codingPath: [CodingKey]
    
    var dictionary: [String: Any]?
    
    var allKeys: [K] {
      dictionary?.keys.compactMap { K(stringValue: $0) } ?? []
    }
    
    func contains(_ key: K) -> Bool {
      dictionary?[key.stringValue] != nil
    }
    
    func decodeNil(forKey key: K) throws -> Bool {
      let value = try getValue(forKey: key)
      return value is NSNull
    }
    
    func decode(_ type: Bool.Type, forKey key: K) throws -> Bool {
      try decodeBool(key: key)
    }
    
    func decode(_ type: String.Type, forKey key: K) throws -> String {
      try decodeString(key: key)
    }
    
    func decode(_ type: Double.Type, forKey key: K) throws -> Double {
      try decodeFloatingPoint(key: key)
    }
    
    func decode(_ type: Float.Type, forKey key: K) throws -> Float {
      try decodeFloatingPoint(key: key)
    }
    
    func decode(_ type: Int.Type, forKey key: K) throws -> Int {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: Int8.Type, forKey key: K) throws -> Int8 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: Int16.Type, forKey key: K) throws -> Int16 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: Int32.Type, forKey key: K) throws -> Int32 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: Int64.Type, forKey key: K) throws -> Int64 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: UInt.Type, forKey key: K) throws -> UInt {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: UInt8.Type, forKey key: K) throws -> UInt8 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: UInt16.Type, forKey key: K) throws -> UInt16 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: UInt32.Type, forKey key: K) throws -> UInt32 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode(_ type: UInt64.Type, forKey key: K) throws -> UInt64 {
      try decodeFixedWidthInteger(key: key)
    }
    
    func decode<T>(_ type: T.Type, forKey key: K) throws -> T where T: Decodable {
      if type == Children<AnyView>.self {
        return try impl.unwrap(as: T.self)
      }
      
      let newDecoder = try decoderForKey(key)
      return try newDecoder.unwrap(as: T.self)
    }
    
    func nestedContainer<NestedKey: CodingKey>(
      keyedBy type: NestedKey.Type,
      forKey key: K
    ) throws -> KeyedDecodingContainer<NestedKey> {
      try decoderForKey(key).container(keyedBy: type)
    }
    
    func nestedUnkeyedContainer(forKey key: K) throws -> UnkeyedDecodingContainer {
      try decoderForKey(key).unkeyedContainer()
    }
    
    func superDecoder() throws -> Decoder {
      NimbusDecoderImpl(
        codingPath: codingPath,
        userInfo: impl.userInfo,
        value: dictionary,
        action: impl.action
      )
    }
    
    func superDecoder(forKey key: K) throws -> Decoder {
      let value: Any?
      do {
        value = try getValue(forKey: key)
      } catch {
        value = nil
      }
      
      var newPath = self.codingPath
      newPath.append(key)
      
      return NimbusDecoderImpl(
        codingPath: newPath,
        userInfo: impl.userInfo,
        value: value
      )
    }
    
    private func decoderForKey<LocalKey: CodingKey>(_ key: LocalKey) throws -> NimbusDecoderImpl {
      let value = try getValue(forKey: key)
      var newPath = codingPath
      newPath.append(key)
      
      return NimbusDecoderImpl(
        codingPath: newPath,
        userInfo: impl.userInfo,
        value: value
      )
    }
    
    private func getValue<LocalKey: CodingKey>(forKey key: LocalKey) throws -> Any {
      guard let value = dictionary?[key.stringValue] else {
        throw DecodingError.keyNotFound(key, .init(
          codingPath: codingPath,
          debugDescription: "No value associated with key \(key) (\"\(key.stringValue)\")."
        ))
      }

      return value
    }
    
    private func decodeBool(key: Self.Key) throws -> Bool {
      let value = try getValue(forKey: key)
      return try impl.unwrapBool(from: value, for: key)
    }
    
    private func decodeString(key: Self.Key) throws -> String {
      let value = try getValue(forKey: key)
      return try impl.unwrapString(from: value, for: key)
    }
    
    private func decodeFixedWidthInteger<T: FixedWidthInteger>(key: Self.Key) throws -> T {
      let value = try getValue(forKey: key)
      return try impl.unwrapFixedWidthInteger(from: value, for: key)
    }
    
    private func decodeFloatingPoint<T: LosslessStringConvertible & BinaryFloatingPoint>(key: K) throws -> T {
      let value = try getValue(forKey: key)
      return try impl.unwrapFloatingPoint(from: value, for: key)
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
      if try getNextValue(ofType: Never.self) is NSNull {
        currentIndex += 1
        return true
      }
      
      return false
    }
    
    mutating func decode(_ type: Bool.Type) throws -> Bool {
      try decodeBool()
    }
    
    mutating func decode(_ type: String.Type) throws -> String {
      try decodeString()
    }
    
    mutating func decode(_ type: Double.Type) throws -> Double {
      try decodeFloatingPoint()
    }
    
    mutating func decode(_ type: Float.Type) throws -> Float {
      try decodeFloatingPoint()
    }
    
    mutating func decode(_ type: Int.Type) throws -> Int {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: Int8.Type) throws -> Int8 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: Int16.Type) throws -> Int16 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: Int32.Type) throws -> Int32 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: Int64.Type) throws -> Int64 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: UInt.Type) throws -> UInt {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: UInt8.Type) throws -> UInt8 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: UInt16.Type) throws -> UInt16 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: UInt32.Type) throws -> UInt32 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode(_ type: UInt64.Type) throws -> UInt64 {
      try decodeFixedWidthInteger()
    }
    
    mutating func decode<T>(_ type: T.Type) throws -> T where T: Decodable {
      let newDecoder = try decoderForNextElement(ofType: T.self)
      let result = try newDecoder.unwrap(as: T.self)
      
      currentIndex += 1
      return result
    }
    
    mutating func nestedContainer<NestedKey: CodingKey>(
      keyedBy type: NestedKey.Type
    ) throws -> KeyedDecodingContainer<NestedKey> {
      let decoder = try decoderForNextElement(ofType: KeyedDecodingContainer<NestedKey>.self)
      let container = try decoder.container(keyedBy: type)
      
      currentIndex += 1
      return container
    }
    
    mutating func nestedUnkeyedContainer() throws -> UnkeyedDecodingContainer {
      let decoder = try decoderForNextElement(ofType: UnkeyedDecodingContainer.self)
      let container = try decoder.unkeyedContainer()
      
      currentIndex += 1
      return container
    }
    
    mutating func superDecoder() throws -> Decoder {
      let decoder = try decoderForNextElement(ofType: Decoder.self)
      currentIndex += 1
      return decoder
    }
    
    private mutating func decoderForNextElement<T>(ofType: T.Type) throws -> NimbusDecoderImpl {
      let value = try getNextValue(ofType: T.self)
      let newPath = codingPath + [DictionaryKey(index: currentIndex)]
      
      return NimbusDecoderImpl(
        codingPath: newPath,
        userInfo: impl.userInfo,
        value: value
      )
    }
    
    private func getNextValue<T>(ofType: T.Type) throws -> Any {
      guard !self.isAtEnd else {
        var path = codingPath
        path.append(DictionaryKey(index: self.currentIndex))
        
        throw DecodingError.valueNotFound(
          T.self,
          .init(codingPath: path,
                debugDescription: "Unkeyed container is at end.",
                underlyingError: nil))
      }
      return array?[currentIndex] ?? NSNull()
    }
    
    private mutating func decodeBool() throws -> Bool {
      let value = try getNextValue(ofType: Bool.self)
      let key = DictionaryKey(index: currentIndex)
      let result = try impl.unwrapBool(from: value, for: key)
      currentIndex += 1
      return result
    }
    
    private mutating func decodeString() throws -> String {
      let value = try getNextValue(ofType: String.self)
      let key = DictionaryKey(index: currentIndex)
      let result = try impl.unwrapString(from: value, for: key)
      currentIndex += 1
      return result
    }
    
    private mutating func decodeFixedWidthInteger<T: FixedWidthInteger>() throws -> T {
      let value = try getNextValue(ofType: T.self)
      let key = DictionaryKey(index: currentIndex)
      let result = try impl.unwrapFixedWidthInteger(from: value, for: key, as: T.self)
      currentIndex += 1
      return result
    }
    
    private mutating func decodeFloatingPoint<T: LosslessStringConvertible & BinaryFloatingPoint>() throws -> T {
      let value = try getNextValue(ofType: T.self)
      let key = DictionaryKey(index: currentIndex)
      let result = try impl.unwrapFloatingPoint(from: value, for: key, as: T.self)
      currentIndex += 1
      return result
    }
    
  }
}

// MARK: - DictionaryKey

struct DictionaryKey: CodingKey {
  var stringValue: String
  var intValue: Int?
  
  init?(stringValue: String) {
    self.stringValue = stringValue
    self.intValue = nil
  }
  
  init?(intValue: Int) {
    self.stringValue = "\(intValue)"
    self.intValue = intValue
  }
  
  init(index: Int) {
    self.init(intValue: index)!
  }
}

extension DictionaryKey: ExpressibleByStringLiteral {
  init(stringLiteral value: StringLiteralType) {
    self.init(stringValue: value)!
  }
}
