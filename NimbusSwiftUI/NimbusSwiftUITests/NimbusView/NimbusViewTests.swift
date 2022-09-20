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

import XCTest
import SnapshotTesting
import SwiftUI

import NimbusCore
@testable import NimbusSwiftUI

class NimbusViewTests: XCTestCase {
  
  let viewModel = ViewModel(
    mode: .local("{}"),
    core: CoreKey.defaultValue
  )
  
  let nextView = """
  {
    "_:component": "material:text",
    "properties": {
      "text": "Next"
    }
  }
  """
  
  func testShowLoading() throws {
    assertSnapshot(with: viewModel) {
      self.viewModel.state = .loading
    }
  }
  
  func testShowError() throws {
    assertSnapshot(with: viewModel) {
      self.viewModel.state = .error(CustomError())
    }
  }
  
  func testShowView() throws {
    assertSnapshot(with: viewModel) {
      self.viewModel.state = .view(ObservableNode(ServerDrivenNode.text))
    }
  }
  
  func testNavigateWithPush() throws {
    let next = ViewModel(mode: .local(nextView), core: NimbusCore.Nimbus())
    assertSnapshot(with: next) {
      self.viewModel.next = .push(next)
    }
  }
  
  func testNavigateWithPresent() throws {
    let next = ViewModel(mode: .local(nextView), core: NimbusCore.Nimbus())
    assertSnapshot(with: next) {
      self.viewModel.next = .present(next)
    }
  }
  
  func assertSnapshot(
    with viewModel: ViewModel,
    file: StaticString = #file,
    testName: String = #function,
    line: UInt = #line,
    onAppear: @escaping () -> Void
  ) {
    let view = NavigationView {
      Nimbus(baseUrl: "base") {
        NimbusView(viewModel: viewModel)
      }
      .ui([myAppUI])
      .onAppear {
        onAppear()
      }
    }.frame(width: 100, height: 100)
    SnapshotTesting.assertSnapshot(matching: view, as: .image, file: file, testName: testName, line: line)
  }
}

struct CustomError: LocalizedError {
  var failureReason: String? = ""
  var errorDescription: String? = "custom error"
}
