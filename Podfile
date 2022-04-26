# Uncomment the next line to define a global platform for your project
platform :ios, '13.0'

workspace './Nimbus.xcworkspace'

target 'NimbusSwiftUI' do
  project './NimbusSwiftUI/NimbusSwiftUI.xcodeproj'
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  pod 'nimbus_core', :path => '../nimbus-core'

  target 'NimbusSample' do
    project './NimbusSample/NimbusSample.xcodeproj'
    # Comment the next line if you don't want to use dynamic frameworks
    use_frameworks!
  
    # pod 'NimbusSwiftUI', :path => './'
  
  end

  target 'NimbusSwiftUITests' do
  
  end

end




