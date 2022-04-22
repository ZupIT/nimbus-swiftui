import SwiftUI

struct ContentView: View {
  var body: some View {
    Beagle(json: """
    {
      "id": "1",
      "component": "layout:container",
      "children": [
        {
          "id": "2",
          "component": "material:text",
          "properties": {
            "text": "Nimbus App @{counter}"
          }
        },
        {
          "id": "3",
          "component": "material:text",
          "properties": {
            "text": "Hi There"
          }
        },
        {
          "id": "4",
          "component": "custom:personCard",
          "properties": {
            "person": {
              "name": "Fulano da Silva",
              "age": 28,
              "company": "ZUP",
              "document": "014.778.547-56"
            },
            "address": {
              "street": "Rua dos bobos",
              "number": 0,
              "zip": "47478-745"
            }
          }
        },
        {
          "id": "5",
          "component": "material:button",
          "properties": {
            "text": "Increment counter",
            "onPress": "[[ACTION:INC_COUNTER]]"
          }
        }
      ]
    }
    """)
  }
}

struct ContentView_Previews: PreviewProvider {
  static var previews: some View {
    ContentView()
  }
}
