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
import NimbusSwiftUI

import NimbusCore

// TODO: Serialization Task

typealias Function = @convention(block) (Any?) -> Void

let components: [String: Component] = [
  "material:text": { (element, _) in
    AnyView(Text(getMapProperty(map: element.properties ?? [:], name: "text")))
  },
  "layout:container": { (_, children) in AnyView(Container(children: children)) },
  "custom:personCard": { (element, _) in
    var personMap: [String: Any] = getMapProperty(map: element.properties ?? [:], name: "person")
    var addressMap: [String: Any] = getMapProperty(map: element.properties ?? [:], name: "address")
    var person = Person(
      name: getMapProperty(map: personMap, name: "name"),
      age: getMapProperty(map: personMap, name: "age"),
      company: getMapProperty(map: personMap, name: "company"),
      document: getMapProperty(map: personMap, name: "document"),
      phone: getMapProperty(map: personMap, name: "phone")
    )
    var address = Address(
      street: getMapProperty(map: addressMap, name: "street"),
      zip: getMapProperty(map: addressMap, name: "zip"),
      number: getMapProperty(map: addressMap, name: "number")
    )
    var personCard = PersonCardModel(person: person, address: address)
    return AnyView(PersonCardComponent(params: personCard))
  },
  "material:button": { (element, _) in
    AnyView(
      Button(
        text: getMapProperty(map: element.properties ?? [:], name: "text"),
        onPress: unsafeBitCast(
          element.properties?["onPress"] as AnyObject,
          to: Function.self
        )
      )
    )
  },
]

func getMapProperty<T>(map: [String: Any], name: String) -> T {
  guard let value = map[name] as? T else {
    fatalError("Could not find property with name: \(name)")
  }
  return value
}


