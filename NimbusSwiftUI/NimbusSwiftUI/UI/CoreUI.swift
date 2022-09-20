//
//  Fragment.swift
//  NimbusSwiftUI
//
//  Created by Tiago Peres França  on 12/09/22.
//

import Foundation
import SwiftUI
import NimbusCore

let coreUILibrary = NimbusSwiftUILibrary()
  .addAction("openUrl") { event in openUrl(event) }
  .addComponent("fragment") { _, children in
    AnyView(VStack(alignment: .leading, spacing: 0, content: children))
  }
  .merge(other: CoreUILibraryKt.coreUILibrary)
