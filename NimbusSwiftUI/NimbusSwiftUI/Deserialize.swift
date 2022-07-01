//
//  Deserialize.swift
//  NimbusSwiftUI
//
//  Created by Daniel Tes on 01/07/22.
//

import Foundation

/// Used for component mapping
public protocol Deserializable {
  init(from map: [String : Any]?, children: [AnyComponent]) throws
}

enum DeserializationError: Error {
  case propertyNotFound(String)
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
///   init(from map: [String : Any]?, children: [AnyComponent]) throws {
///     self.text = try getMapProperty(map: map, name: "text")
///     self.number = try getMapProperty(map: map, name: "number")
///   }
/// }
/// ```
///
public func getMapProperty<T>(map: [String: Any]?, name: String) throws -> T {
  guard let map = map, let value = map[name] as? T else {
    throw DeserializationError.propertyNotFound(name)
  }
  return value
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
///   init(from map: [String : Any]?, children: [AnyComponent]) throws {
///     let function = getMapFunction(map: map, name: "onPress")
///     self.onPress = { function(nil) }
///   }
/// }
/// ```
///
public func getMapFunction(map: [String: Any]?, name: String) -> CoreFunction {
  // TODO: refactor this to a safe cast
  unsafeBitCast(
    map?["onPress"] as AnyObject,
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
///   init(from map: [String : Any]?, children: [AnyComponent]) throws {
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
///   init(from map: [String : Any]?, children: [AnyComponent]) throws {
///     self.state = getMapEnumDefault(map: map, name: "state", default: .on)
///   }
/// }
/// ```
///
public func getMapEnumDefault<T, RawValue>(map: [String: Any]?, name: String, default: T) throws -> T where T: RawRepresentable, RawValue == T.RawValue {
  let value: RawValue? = try getMapProperty(map: map, name: name)
  return T(rawValue: value ?? `default`.rawValue) ?? `default`
}
