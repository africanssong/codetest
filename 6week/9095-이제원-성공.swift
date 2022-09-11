//
//  main.swift
//  codetest
//
//  Created by 이제원 on 2022/09/05.
//

import Foundation

let T = Int(readLine()!)! // test case
var n = [Int](repeating: 0, count: 100)

for j in 0..<T {
    n[j] = Int(readLine()!)! // input data
}

var dp = [Int](repeating: 0, count: 13)

dp[1] = 1; dp[2] = 2; dp[3] = 4

for j in 4...11 {
    dp[j] = dp[j-3] + dp[j-2] + dp[j-1]
}
for j in 0..<T {
    print(dp[n[j]])
}
