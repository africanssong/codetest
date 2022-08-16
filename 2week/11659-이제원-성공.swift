//
//  main.swift
//  codeteest
//
//  Created by 이제원 on 2022/08/17.

// *빌드하려면 파일명을 main.swift로 변경해야 함*

import Foundation

func prefixSum(arr: [Int]) -> [Int] {
    var ret = [0] + arr
    for j in 1..<ret.count {
        ret[j] += ret[j-1]
    }
    return ret
}

let line1 = readLine()!.split(separator: " ").map{Int($0)!}

let N = line1[0]
let M = line1[1]

let line2 = readLine()!.split(separator: " ").map{Int($0)!}
let sumArr = prefixSum(arr: line2)

for _ in 0..<M {
    let arr = readLine()!.split(separator: " ").map{Int($0)!}
    let i = arr[0]
    let j = arr[1]
    print(sumArr[j] - sumArr[i-1])
}

