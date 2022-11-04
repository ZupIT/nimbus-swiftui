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

let material = NimbusSwiftUILibrary("material")
  .addComponent("button") { node in
    try NimbusDecoder.decode(CustomButton.self, from: node)
  }
  .addComponent("text") { node in
    try NimbusDecoder.decode(Text.self, from: node)
  }

let layout = NimbusSwiftUILibrary("layout")
  .addComponent("container") { node in
    try NimbusDecoder.decode(Container<AnyView>.self, from: node)
  }
