//
//  NimbusSampleApp.swift
//  NimbusSample
//
//  Created by Daniel Tes on 22/04/22.
//

import SwiftUI
import NimbusSwiftUI

@main
struct NimbusSampleApp: App {
  
  init() {
    NimbusSwiftUI.components = components
  }
  
  var body: some Scene {
    WindowGroup {
      ContentView()
    }
  }
}
