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

// TODO: Serialization Task

typealias Function = @convention(block) (Any?) -> Void

let components: [String: Component] = [
  "material:text": { (element, _) in
    AnyComponent(Text(try getMapProperty(map: element.properties, name: "text")))
  },
  "layout:container": { (_, children) in AnyComponent(Container(children: children)) },
  "material:button": { (element, children) in
    AnyComponent(try CustomButton(from: element.properties, children: children))
  }
]
