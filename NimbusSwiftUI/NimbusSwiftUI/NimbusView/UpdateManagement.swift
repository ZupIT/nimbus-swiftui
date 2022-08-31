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

import Foundation
import SwiftUI

final class ForcefulUpdate: ObservableObject {
  @Published var value: Bool = true
  
  func force() {
    value = !value
  }
}

final class MemoizedView<Content: View> {
  private var value: Content?
  
  /// Invalidates the currently cached view so the next call to remember() can rebuild the structure.
  func invalidate() {
    value = nil
  }
  
  /// Remembers the current view if one can be remembered. Otherwise, builds the view passed as parameter, which will be remembered in the next call.
  func remember(@ViewBuilder builder: () -> Content) -> Content {
    if (value == nil) {
      value = builder()
    }
    return value!
  }
}
