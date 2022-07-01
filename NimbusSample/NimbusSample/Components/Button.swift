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

struct CustomButton: View {
  var text: String
  var enabled: Bool = true
  var onPress: () -> Void
  
  var body: some View {
    Button(text) {
      onPress()
    }
    .disabled(!enabled)
  }
}

extension CustomButton: Deserializable {
  init(from map: [String : Any]?, children: [AnyComponent]) throws {
    self.text = try getMapProperty(map: map, name: "text")
    self.enabled = try getMapPropertyDefault(map: map, name: "enabled", default: true)
    let function = getMapFunction(map: map, name: "onPress")
    self.onPress = { function(nil) }
  }
}
