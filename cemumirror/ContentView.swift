//
//  ContentView.swift
//  cemumirror
//
//  Created by Benjamin Coveler on 2/24/23.
//

import SwiftUI
import AVKit

func loadFrom(URLAddress: String) {
    guard let url = URL(string: URLAddress) else {
        return
    }
}

struct ContentView: View {
    var body: some View {
        VStack {
            AsyncImage(url: URL(string: "https://www.zero2turbo.com/wp-content/uploads/2020/09/driven-porsche-911-gt3-rs-weissach-package-south-africa-zero2turbo-3-1536x1152.jpg"))
        }
        .padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
