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

struct ContentView: View {
  var body: some View {
    Nimbus(json: """
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
    .environmentObject(
      NimbusConfig(
        baseUrl: "https://localhost:8080",
        components: components
      )
    )
  }
}

struct ContentView_Previews: PreviewProvider {
  static var previews: some View {
    ContentView()
  }
}
