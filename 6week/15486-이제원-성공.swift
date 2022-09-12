//
//  main.swift
//  codetest
//
//  Created by 이제원 on 2022/09/05.
//

import Foundation

let N = Int(readLine()!)! // 남은 기간
var T = [Int](repeating: 0, count: N+2) // 상담을 완료하는데 걸리는 기간
var P = [Int](repeating: 0, count: N+2) // 상담 시 받는 금액
var dp = [Int](repeating: 0, count: N+2)
var sum = 0// 총 합

for j in 0..<N {
    let line = readLine()?.split {$0 == " "}.map{Int($0)!}
    T[j] = line![0]
    P[j] = line![1]
}

for j in 0..<N {
    sum = max(sum, dp[j])
    if j+T[j] > N { continue } // j+T[j]가 N보다 크면 일 못하므로 pass
    dp[j+T[j]] = max(sum+P[j], dp[j+T[j]])
}

print(dp.max()!)
