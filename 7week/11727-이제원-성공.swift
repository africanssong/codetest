//
//  main.swift
//  codetest
//
//  Created by 이제원 on 2022/09/05.
//

import Foundation

let n = Int(readLine()!)!

var dp = [Int](repeating: 0, count: 1003)

dp[0] = 0; dp[1] = 1; dp[2] = 3;
if n >= 3 {
    for j in 3...n {
        dp[j] = (dp[j-1] + 2*dp[j-2]) % 10007 // 점화식
    }
}
print(dp[n])
