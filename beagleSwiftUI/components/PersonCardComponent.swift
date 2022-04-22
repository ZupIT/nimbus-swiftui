import SwiftUI

struct PersonCardComponent: View {
  var params: PersonCardModel
  var body: some View {
    VStack {
      Text(params.person.name)
      Text(String(params.person.age))
      Text(params.person.document)
      Text(params.person.phone ?? "-")
      Text(params.address.street)
      Text(params.address.zip)
      Text(String(params.address.number))
    }.onAppear(perform: {
      print("render PersonCard!")
    })
  }
}
