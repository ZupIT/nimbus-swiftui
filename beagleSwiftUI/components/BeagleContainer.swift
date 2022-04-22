import SwiftUI

struct BeagleContainer: View {
  var children: [AnyView]
  var body: some View {
    ForEach(0..<children.count) { index in
      children[index]
    }
  }
}
