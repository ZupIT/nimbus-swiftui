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

// MARK: - Children

@propertyWrapper
public struct Children<Content: View> {
  public var wrappedValue: () -> Content
  
  public init(@ViewBuilder wrappedValue: @escaping () -> Content) {
    self.wrappedValue = wrappedValue
  }
}

extension Children: Decodable {
  public init(from decoder: Decoder) throws {
    throw DecodingError.dataCorrupted(DecodingError.Context(
      codingPath: decoder.codingPath,
      debugDescription: "The children cannot be configured. Make sure this value is decoded using NimbusDecoder.")
    )
  }
}

// MARK: - Event

@propertyWrapper
public struct Event {
  public var wrappedValue: () -> Void
  
  public init(wrappedValue: @escaping () -> Void) {
    self.wrappedValue = wrappedValue
  }
}

extension Event: Decodable {
  public init(from decoder: Decoder) throws {
    throw DecodingError.dataCorrupted(DecodingError.Context(
      codingPath: decoder.codingPath,
      debugDescription: "The event cannot be configured. Make sure this value is decoded using NimbusDecoder.")
    )
  }
}

@propertyWrapper
public struct StatefulEvent<T> {
  public var wrappedValue: (T) -> Void
  
  public init(wrappedValue: @escaping (T) -> Void) {
    self.wrappedValue = wrappedValue
  }
}

extension StatefulEvent: Decodable {
  public init(from decoder: Decoder) throws {
    throw DecodingError.dataCorrupted(DecodingError.Context(
      codingPath: decoder.codingPath,
      debugDescription: "The event cannot be configured. Make sure this value is decoded using NimbusDecoder.")
    )
  }
}

struct AnyServerDrivenEvent {
  var value: ServerDrivenEvent?
}

extension AnyServerDrivenEvent: Decodable {
  init(from decoder: Decoder) throws {
    throw DecodingError.dataCorrupted(DecodingError.Context(
      codingPath: decoder.codingPath,
      debugDescription: "The event cannot be configured. Make sure this value is decoded using NimbusDecoder.")
    )
  }
}

extension KeyedDecodingContainer {
  public func decode(_ type: Event.Type, forKey key: Self.Key) throws -> Event {
    let anyEvent = try decode(AnyServerDrivenEvent.self, forKey: key)
    return Event { anyEvent.value?.run() }
  }
  
  public func decode<T>(_ type: StatefulEvent<T>.Type, forKey key: Self.Key) throws -> StatefulEvent<T> {
    let anyEvent = try decode(AnyServerDrivenEvent.self, forKey: key)
    return StatefulEvent { value in anyEvent.value?.run(implicitStateValue: value) }
  }
}

@propertyWrapper
public struct CoreAction {
  public var wrappedValue: ActionTriggeredEvent
  
  public init(wrappedValue: ActionTriggeredEvent) {
    self.wrappedValue = wrappedValue
  }
}

extension CoreAction: Decodable {
  public init(from decoder: Decoder) throws {
    throw DecodingError.dataCorrupted(DecodingError.Context(
      codingPath: decoder.codingPath,
      debugDescription: "The action cannot be configured. Make sure this value is decoded using NimbusDecoder.")
    )
  }
}

extension KeyedDecodingContainer {
  public func decode(_ type: CoreAction.Type, forKey key: Self.Key) throws -> CoreAction {
    try superDecoder().singleValueContainer().decode(CoreAction.self)
  }
}
