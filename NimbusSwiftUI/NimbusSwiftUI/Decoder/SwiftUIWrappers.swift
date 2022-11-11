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

extension State: Decodable where Value: Decodable {
  public init(from decoder: Decoder) throws {
    throw DecodingError.dataCorrupted(DecodingError.Context(
      codingPath: decoder.codingPath,
      debugDescription: "Unimplemented. Make sure this value is decoded using a KeyedDecodingContainer.")
    )
  }
}

extension KeyedDecodingContainer {
  public func decode<Value: Decodable>(_ type: State<Value>.Type, forKey key: Self.Key) throws -> State<Value> {
    let value = try decode(Value.self, forKey: key)
    return State(wrappedValue: value)
  }
  
  public func decode<Value: Decodable>(_ type: State<Value?>.Type, forKey key: Self.Key) throws -> State<Value?> {
    let value = try decodeIfPresent(Value.self, forKey: key)
    return State(wrappedValue: value)
  }
}
