//
//  String.swift
//  NimbusSwiftUI
//
//  Created by Tiago Peres França  on 12/09/22.
//

import Foundation

extension String {
  func substring(with nsrange: NSRange?) -> String? {
    if let nsrange = nsrange {
      guard let range = Range(nsrange, in: self) else { return nil }
      let substr = self[range]
      return String(substr)
    } else { return nil }
  }
}
