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
    Nimbus(baseUrl: "base") {
      NimbusNavigator(json: """
      {
        "_:component": "material:button",
        "properties": {
          "text": "Button",
          "onPress": [
            {
              "_:action": "openUrl",
              "properties": {
                "url": "https://apple.com"
              }
            }
          ]
        }
      }
      """)
    }
    .components(components)
  }
}

struct ContentView_Previews: PreviewProvider {
  static var previews: some View {
    ContentView()
  }
}
