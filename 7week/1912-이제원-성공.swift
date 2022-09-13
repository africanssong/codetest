import Foundation

let n = Int(readLine()!)!

let line = readLine()!.split {$0 == " "}.map {Int($0)!}
var dp = line
var t = Int()

for j in 1..<n {
    if dp[j-1] < 0 {
        dp[j] += 0
    } else {
        dp[j] += dp[j-1]
    }
}
print(dp.max()!)
