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
//    NimbusNav(json: """
//    {
//      "component": "layout:container",
//      "children": [
//        {
//          "component": "material:text",
//          "properties": {
//            "text": "Screen 1"
//          }
//        },
//        {
//          "component": "material:button",
//          "properties": {
//            "text": "Next",
//            "onPress": [{
//              "action": "push",
//              "properties": {
//                "url": "/screen2.json"
//              }
//            }]
//          }
//        }
//      ]
//    }
//    """)
    NimbusNav(url: "/screen2.json")
    .environmentObject(
      NimbusConfig(
        baseUrl: "https://gist.githubusercontent.com/Tiagoperes/74808ebd7ad7f0645491fc60436223a6/raw/769f73ed6f687f5dd20a8598a020c03e740ce43f",
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
