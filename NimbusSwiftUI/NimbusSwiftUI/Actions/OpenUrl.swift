/*
 * Copyright 2022 ZUP IT SERVICOS EM TECNOLOGIA E INOVACAO SA
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

import UIKit

// TODO: Dependencies structure
var opener: UrlOpener = UIApplication.shared

let openUrl: Action = { event in
  if let urlString = event.action.properties?["url"] as? String, let url = URL(string: urlString) {
    if opener.canOpenURL(url) {
      _ = opener.openURL(url)
    }
  }
  
  return nil
}

protocol UrlOpener {
  func canOpenURL(_ url: URL) -> Bool
  func openURL(_ url: URL) -> Bool
}

extension UIApplication: UrlOpener {}
