import SwiftUI
import NimbusCore

typealias Function = @convention(block) () -> Void

let components: [String: (ServerDrivenNode, [AnyView]) -> AnyView] = [
  "material:text": { (element, _) in AnyView(BeagleText(text: getMapProperty(map: element.properties ?? [:], name: "text"))) },
  "layout:container": { (_, children) in AnyView(BeagleContainer(children: children)) },
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
      BeagleButton(
        text: getMapProperty(map: element.properties ?? [:], name: "text"),
        onPress: unsafeBitCast(
          element.properties?["onPress"] as AnyObject,
          to: Function.self
        )
      )
    )
  },
]
