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

struct NimbusView: View {
  
  @Environment(\.dependencies) private var dependencies: Dependencies
  @ObservedObject var viewModel: ViewModel
  
  init(viewModel: ViewModel) {
    self.viewModel = viewModel
  }
  
  func onError(error: Error) -> AnyView {
    viewModel.state = .error(error)
    return AnyView(EmptyView())
  }
  
  var body: some View {
    VStack {
      NavigationLink(unwrap: $viewModel.next.case(ViewModel.Navigation.pushCasePath)) { viewModel in
        NimbusView(viewModel: viewModel.wrappedValue)
      }
      .isDetailLink(false)
      
      switch viewModel.state {
      case .loading:
        dependencies.loading()
      case let .error(error):
        dependencies.error(error, retry)
      case let .view(node: node):
        RenderedNode(observableNode: node, onError: onError)
      }
    }
    .sheet(unwrap: $viewModel.next.case(ViewModel.Navigation.presentCasePath)) { viewModel in
      NavigationView {
        NimbusView(viewModel: viewModel.wrappedValue)
      }
      .navigationViewStyle(.stack)
    }
    .onLoad {
      viewModel.load()
    }
  }
  
  func retry() {
    viewModel.load()
  }
}
