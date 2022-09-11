//
//  main.swift
//  codetest
//
//  Created by 이제원 on 2022/09/05.
//

import Foundation

let line = readLine()!.split { $0 == " " }.map { Int($0)! }

let N = line[0]
let K = line[1]

var dp = [[UInt64]](repeating: Array(repeating: 0, count: 202), count: 202)
let initArr = [UInt64](repeating: 1, count: 202)

dp[1][0..<202] = initArr[0..<202] // K=1일 때 dp[k][N] = 1

for i in 0...K {
    if i<1 {
        continue
    }
    for j in 0...N {
        for l in 0...j {
            dp[i][j] += dp[i-1][l] % 1000000000
        }
    }
}

print(dp[K][N]%1000000000)
