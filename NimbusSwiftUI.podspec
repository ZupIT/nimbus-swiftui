#
# Copyright 2022 ZUP IT SERVICOS EM TECNOLOGIA E INOVACAO SA
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

Pod::Spec.new do |spec|

  spec.name         = "NimbusSwiftUI"
  spec.version      = "0.0.1"
  spec.summary      = "NimbusSwiftUI."

  spec.description  = <<-DESC
    Nimbus for SwiftUI
    DESC

  spec.homepage     = "http://zup.nimbus-swiftui.com"
  spec.license      = "Apache License 2.0"

  spec.author       = "Zup IT"
  spec.platform     = :ios, "13.0"

  spec.source       = { :git => "https://github.com/ZupIT/nimbus-swiftui.git", :tag => "#{spec.version}" }

  spec.source_files  = "NimbusSwiftUI", "NimbusSwiftUI/**/*.{h,m}"
  spec.exclude_files = "NimbusSwiftUITests"

end
