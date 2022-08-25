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

import Foundation
import SwiftUI

/// Used for component mapping
public protocol Deserializable {
  init(from map: [String : Any]?) throws
}

extension Deserializable {
  public init(from map: [String : Any]?) throws {
    try self.init(from: map)
  }
}

enum DeserializationError: LocalizedError {
  case propertyOfType(String, type: String)
  
  var errorDescription: String? {
    switch self {
    case .propertyOfType(let string, let type):
      return "property \(string) of \(type) not found"
    }
  }
}

/// This is the general case for property deserialization, can be used for optional properties too.
///
/// Sample:
///
/// ```swift
/// struct Component: Deserializable {
///   var text: String
///   var number: Double?
///
///   init(from map: [String : Any]?) throws {
///     self.text = try getMapProperty(map: map, name: "text")
///     self.number = try getMapProperty(map: map, name: "number")
///   }
/// }
/// ```
///
public func getMapProperty<T>(map: [String: Any]?, name: String) throws -> T {
  let map: [String: Any] = map ?? [:]
  guard let value = map[name] as? T else {
    throw DeserializationError.propertyOfType(name, type: String(describing: T.self))
  }
  return value
}

public func getMapProperty(map: [String: Any]?, name: String) throws -> String {
  let map: [String: Any] = map ?? [:]
  guard let value = map[name] else {
    throw DeserializationError.propertyOfType(name, type: String(describing: String.self))
  }
  if value is NSNull {
    return ""
  }
  return "\(value)"
}

public typealias CoreFunction = @convention(block) (Any?) -> Void


/// Used for function deserialization.
///
/// Sample:
///
/// ```swift
/// struct Component: Deserializable {
///   var onPress: () -> Void
///
///   init(from map: [String : Any]?) throws {
///     let function = getMapFunction(map: map, name: "onPress")
///     self.onPress = { function(nil) }
///   }
/// }
/// ```
///
public func getMapFunction(map: [String: Any]?, name: String) -> CoreFunction {
  // TODO: refactor this to a safe cast
  unsafeBitCast(
    map?[name] as AnyObject,
    to: CoreFunction.self
  )
}

/// Used for deserialization of a property with default value.
///
/// Sample:
///
/// ```swift
/// struct Component: Deserializable {
///   var text = "default text"
///
///   init(from map: [String : Any]?) throws {
///     self.text = getMapPropertyDefault(map: map, name: "text", default: "default text")
///   }
/// }
/// ```
///
public func getMapPropertyDefault<T>(map: [String: Any]?, name: String, default: T) throws -> T {
  let value: T? = try getMapProperty(map: map, name: name)
  return value ?? `default`
}

/// Used for deserialization of a enum property with default value.
///
/// Sample:
///
/// ```swift
/// struct Component: Deserializable {
///   var state = State.on
///   enum State: String {
///     case on
///     case off
///   }
///
///   init(from map: [String : Any]?) throws {
///     self.state = getMapEnumDefault(map: map, name: "state", default: .on)
///   }
/// }
/// ```
///
public func getMapEnumDefault<T, RawValue>(map: [String: Any]?, name: String, default: T) throws -> T where T: RawRepresentable, RawValue == T.RawValue {
  let value: RawValue? = try getMapProperty(map: map, name: name)
  return T(rawValue: value ?? `default`.rawValue) ?? `default`
}
