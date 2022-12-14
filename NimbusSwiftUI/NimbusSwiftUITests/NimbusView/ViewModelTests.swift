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

import XCTest

import NimbusCore
@testable import NimbusSwiftUI

class ViewModelTests: XCTestCase {
  
  let core = NimbusCore.Nimbus()
  
  func testPush() throws {
    // Given
    let sut = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    
    // When
    sut.push(request: ViewRequest("next"))
    
    // Then
    guard case let .push(nextVm) = sut.next else {
      XCTFail("Expected .push(ViewModel), but was \(String(describing: sut.next))")
      return
    }
    
    XCTAssertEqual(nextVm.url, "next")
    XCTAssertTrue(nextVm.prev === sut)
      
    nextVm.load()
    XCTAssertEqual(nextVm.view?.states, nil)
  }
    
  func testPushWithParams() throws {
    // Given
    let sut = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    
    // When
    sut.push(request: ViewRequest("next", params: ["testParamState": "test state param value"]))
      
    // Then
    guard case let .push(nextVm) = sut.next else {
      XCTFail("Expected .push(ViewModel), but was \(String(describing: sut.next))")
      return
    }
    
    nextVm.load()
    XCTAssertEqual(nextVm.view?.states?.count, 1)
    XCTAssertEqual(nextVm.view?.states?.first?.id, "testParamState")
    XCTAssertEqual(nextVm.view?.states?.first?.value(forKey: "") as? String, "test state param value")
  }
  
  func testPresent() throws {
    // Given
    let sut = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    
    // When
    sut.present(request: ViewRequest("next"))
    
    // Then
    guard case let .present(nextVm) = sut.next else {
      XCTFail("Expected .present(ViewModel), but was \(String(describing: sut.next))")
      return
    }
    XCTAssertEqual(nextVm.url, "next")
    XCTAssertTrue(nextVm.prev === sut)
      
    nextVm.load()
    XCTAssertEqual(nextVm.view?.states, nil)
  }
    
  func testPresentWithParams() throws {
    // Given
    let sut = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
      
    // When
    sut.present(request: ViewRequest("next", params: ["testParamState": "test state param value"]))
      
    // Then
    guard case let .present(nextVm) = sut.next else {
      XCTFail("Expected .present(ViewModel), but was \(String(describing: sut.next))")
      return
    }
    
    nextVm.load()
    XCTAssertEqual(nextVm.view?.states?.count, 1)
    XCTAssertEqual(nextVm.view?.states?.first?.id, "testParamState")
    XCTAssertEqual(nextVm.view?.states?.first?.value(forKey: "") as? String, "test state param value")
  }
  
  func testPop() throws {
    // Given
    let root = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    let sut = ViewModel(mode: .remote(.init("next")), core: core)
    root.next = .push(sut)
    
    // When
    sut.pop()
    
    // Then
    XCTAssertNil(root.next)
  }
  
  func testPopWithViewPresented() throws {
    // Given
    let root = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    let sut = ViewModel(mode: .remote(.init("next")), core: core)
    root.next = .present(sut)
    
    // When
    sut.pop()
    
    // Then
    XCTAssertEqual(root.next, .present(sut))
  }
  
  func testDismiss() throws {
    // Given
    let root = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    let sut = ViewModel(mode: .remote(.init("next")), core: core)
    root.next = .present(sut)
    
    // When
    sut.dismiss()
    
    // Then
    XCTAssertNil(root.next)
  }
  
  func testDismissWithViewPushed() throws {
    // Given
    let root = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    let sut = ViewModel(mode: .remote(.init("next")), core: core)
    root.next = .push(sut)
    
    // When
    sut.dismiss()
    
    // Then
    XCTAssertEqual(root.next, .push(sut))
  }
  
  func testPopTo() throws {
    // Given
    let root = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    let view1 = ViewModel(mode: .remote(.init("view1")), core: core)
    let view2 = ViewModel(mode: .remote(.init("view2")), core: core)
    let view3 = ViewModel(mode: .remote(.init("view3")), core: core)
    root.next = .push(view1)
    view1.next = .push(view2)
    view2.next = .push(view3)
    
    // When
    view3.popTo(url: "view1")
    
    // Then
    XCTAssertNil(view1.next)
  }
  
  func testPopToViewUpInPresentedHierarchy() throws {
    // Given
    let root = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    let view1 = ViewModel(mode: .remote(.init("view1")), core: core)
    let view2 = ViewModel(mode: .remote(.init("view2")), core: core)
    let view3 = ViewModel(mode: .remote(.init("view3")), core: core)
    root.next = .push(view1)
    view1.next = .present(view2)
    view2.next = .push(view3)
    
    // When
    view3.popTo(url: "view1")
    
    // Then
    XCTAssertNotNil(root.next)
    XCTAssertNotNil(view1.next)
    XCTAssertEqual(view2.next, .push(view3))
  }
  
  func testLoadFromRequest() throws {
    // Given
    let fetch = XCTestExpectation(description: "ViewClient.fetch()")
    let onInit = XCTestExpectation(description: "View.onChange()")
    let response = RootNode()
    let clientSpy = ViewClientSpy(fetch, response)
    let core = NimbusCore.Nimbus(viewClient: clientSpy)
    let sut = ViewModel(mode: .remote(.init("remoteUrl")), core: core)
    sut.view = ServerDrivenView(nimbus: core, states: nil, description: sut.url) { sut }
    
    // When
    sut.load { onInit.fulfill() }
    
    // Then
    wait(for: [fetch, onInit], timeout: 3)
    guard case let .view(observedNode) = sut.state else {
      XCTFail("Expected .view(ObservableNode), but was \(String(describing: sut.state))")
      return
    }
    XCTAssertEqual(observedNode.node.id, response.id)
    XCTAssertEqual(observedNode.node.component, response.component)
  }
  
  func testLoadFromJson() throws {
    // Given
    let component = "material:text"
    let text = "Hello World!"
    let sut = ViewModel(
      mode: .local(
        """
        {
          "_:component": "\(component)",
          "properties": {
            "text": "\(text)"
          }
        }
        """
      ),
      core: core
    )
    
    // When
    sut.load()
    
    // Then
    guard case let .view(observedNode) = sut.state else {
      XCTFail("Expected .view(ObervableNode), but was \(String(describing: sut.state))")
      return
    }
    XCTAssertEqual(observedNode.node.id, "nimbus:root")
    let content = observedNode.node.children?.first
    XCTAssertEqual(content?.component, component)
    XCTAssertEqual(content?.properties?["text"] as? String, text)
  }
}

extension ViewModel.Navigation: Equatable {
  public static func == (lhs: ViewModel.Navigation, rhs: ViewModel.Navigation) -> Bool {
    if case let .push(vm1) = lhs, case let .push(vm2) = rhs {
      return vm1 === vm2
    } else if case let .present(vm1) = lhs, case let .present(vm2) = rhs {
      return vm1 === vm2
    }
    return false
  }
}

class ViewClientSpy: ViewClient {
  let expectation: XCTestExpectation
  let response: RootNode
  
  init(_ expectation: XCTestExpectation, _ response: RootNode) {
    self.expectation = expectation
    self.response = response
  }
  
  func fetch(request: ViewRequest) async throws -> RootNode {
    expectation.fulfill()
    return response
  }
  
  func preFetch(request: ViewRequest) { }
}
