//
//  UILibrary.swift
//  NimbusSwiftUI
//
//  Created by Tiago Peres França  on 12/09/22.
//

import Foundation
import NimbusCore

public class NimbusSwiftUILibrary: UILibrary {
  var components: [String: ComponentBuilder] = [:]
  
  public init() {
    super.init(namespace: "")
  }
  
  public init(_ namespace: String) {
    super.init(namespace: namespace)
  }
  
  public func addAction(_ name: String, handler: @escaping Action) -> NimbusSwiftUILibrary {
    super.addAction(name: name, handler: handler)
    return self
  }

  public func addActionInitializer(_ name: String, handler: @escaping ActionInitializationHandler) -> NimbusSwiftUILibrary {
    super.addActionInitializer(name: name, handler: handler)
    return self
  }

  public func addActionObserver(observer: @escaping Action) -> NimbusSwiftUILibrary {
    super.addActionObserver(observer: observer)
    return self
  }

  public func addOperation(_ name: String, handler: @escaping Operation) -> NimbusSwiftUILibrary {
    super.addOperation(name: name, handler: handler)
    return self
  }
  
  public func addComponent(_ name: String, builder: @escaping ComponentBuilder) -> NimbusSwiftUILibrary {
    components[name] = builder
    return self
  }
  
  public func getComponent(_ name: String) -> ComponentBuilder? {
    return components[name]
  }
  
  public func merge(_ other: NimbusSwiftUILibrary) {
    super.merge(other: other)
    components.merge(other.components) { (_, new) in new }
  }
  
  public override func merge(other: NimbusCore.UILibrary) -> NimbusSwiftUILibrary {
    super.merge(other: other)
    return self
  }
}

extension UILibraryManager {
  func getComponent(identifier: String) -> ComponentBuilder? {
    let split = UILibraryManager.companion.splitIdentifier(identifier: identifier)
    if let split = split {
      let lib = getLibrary(namespace: split.namespace_)
      if let lib = lib as? NimbusSwiftUILibrary {
        return lib.getComponent(split.name)
      }
    }
    return nil
  }
}

