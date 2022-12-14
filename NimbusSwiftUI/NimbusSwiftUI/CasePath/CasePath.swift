/*
 * Copyright 2023 ZUP IT SERVICOS EM TECNOLOGIA E INOVACAO SA
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

struct CasePath<Root, Value> {
  let extract: (Root) -> Value?
  let embed: (Value) -> Root
}

// MARK: - Binding

extension Binding {
  func `case`<Enum, Case>(_ casePath: CasePath<Enum, Case>) -> Binding<Case?>
  where Value == Enum? {
    Binding<Case?>(
      get: {
        guard
          let wrappedValue = self.wrappedValue,
          let `case` = casePath.extract(wrappedValue)
        else { return nil }
        return `case`
      },
      set: { `case` in
        if let `case` = `case` {
          self.wrappedValue = casePath.embed(`case`)
        } else {
          self.wrappedValue = nil
        }
      }
    )
  }
}

// MARK: - ViewModel.Navigation

extension ViewModel.Navigation {
  static var pushCasePath: CasePath<ViewModel.Navigation, ViewModel> {
    CasePath<ViewModel.Navigation, ViewModel>(
      extract: { navigation in
        guard case let .push(viewModel) = navigation else { return nil }
        return viewModel
      },
      embed: ViewModel.Navigation.push
    )
  }
  
  static var presentCasePath: CasePath<ViewModel.Navigation, ViewModel> {
    CasePath<ViewModel.Navigation, ViewModel>(
      extract: { navigation in
        guard case let .present(viewModel) = navigation else { return nil }
        return viewModel
      },
      embed: ViewModel.Navigation.present
    )
  }
}
