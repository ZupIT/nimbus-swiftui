/*func getMapProperty<T>(map: [String: Any], name: String) -> T? {
 map[name] as? T
}*/

func getMapProperty<T>(map: [String: Any], name: String) -> T {
  guard let value = map[name] as? T else {
    fatalError("Could not find property with name: \(name)")
  }
  return value
}
