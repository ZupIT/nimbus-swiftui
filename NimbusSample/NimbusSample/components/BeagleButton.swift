import SwiftUI

struct BeagleButton: View {
  var text: String
  var onPress: () -> Void
  var body: some View {
    Button(text) {
      onPress()
    }
  }
}
