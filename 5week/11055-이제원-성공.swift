import Foundation

let n = Int(readLine()!)! // 입력개수
let arr = readLine()!.split { $0 == " " }.map { Int($0)! } // 입력 배열

var dp = [Int](repeating: 0, count: n) // 배열

dp[0] = arr[0]

for i in 1..<n {
    dp[i] = arr[i]
    for j in 0..<i {
        if arr[i] > arr[j] {
        dp[i] = max(dp[i], dp[j]+arr[i])
        }
    }
}

print(dp.max()!)