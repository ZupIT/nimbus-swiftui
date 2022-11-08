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

import NimbusCore

public class NimbusSwiftUILibrary: UILibrary {
  var components: [String: ComponentBuilder] = [:]
  
  public init(_ namespace: String = "") {
    super.init(namespace: namespace)
  }
  
  public func addAction(_ name: String, handler: @escaping Action) -> NimbusSwiftUILibrary {
    super.addAction(name: name, handler: handler)
    return self
  }
  
  public func addAction<T: Decodable>(_ name: String, handler: @escaping (T) -> Void) -> NimbusSwiftUILibrary {
    super.addAction(name: name) { event in
      do {
        let action = try NimbusDecoder.decode(T.self, from: event.action.properties ?? [:])
        handler(action)
      } catch {
        // log error
        fatalError()
      }
    }
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
  
  public func addOperation<T: OperationDecodable>(_ name: String, handler: @escaping (T) -> Any?) -> NimbusSwiftUILibrary {
    super.addOperation(name: name) { array in
      do {
        let operation = try NimbusDecoder.decode(T.self, from: array)
        return handler(operation)
      } catch {
        // log error
        fatalError()
      }
    }
    return self
  }
  
  public func addComponent<T: NimbusComponent>(_ name: String, _ type: T.Type) -> NimbusSwiftUILibrary {
    components[name] = { node in
      try NimbusDecoder.decode(type, from: node)
    }
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
