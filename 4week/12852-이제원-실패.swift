//
//  main.swift
//  codetest
//
//  Created by 이제원 on 2022/08/26.
//

import Foundation



/// 문제유형: DP
/// DP bottom-up 방식, DFS, BFS 등의 알고리듬 사용하여 문제 해결 가능
/// top-level 방식(재귀함수 호출)으로 문제 해결을 시도했지만 틀림
/// 다음 사이트를 참고하여 bottom-up 방식으로 문제를 품
/// https://cherishvert.tistory.com/37
///
/// 런타임에러 발생
///  - 입력값이 1일 때, 1이 for-loop에 들어가지 못하여 런타임에러 발생
///     - n=1일 때 처리하는 if문 구문 따로 만듬 line 38~42
///  - 문제를 전역에서 풀다 보니 line 38~42에서 함수를 탈출시키기 위해 exit(1)을 호출함
///  - exit(1) 때문에 런타임에러가 발생해서 top-level 부분 전체를 함수로 만들어 n=1인 경우 exit(1)을
///  호출하게 하지 않고 return으로 처리하게끔 해주니 정상동작
///

/// 백준 12852 - 1로만들기 2
/// - Returns: 없음
func p() -> Void {

    let line1 = readLine()!

    let arr = line1.split { $0 == " " }.map {Int($0)!}
    let n = arr[0]


    var dp = [Int](repeating: 0, count: n + 3)
    var answer = [Int](repeating: 0, count: n + 3)
    dp[1] = 0
    answer[1] = -1

    /// n = 1일 때 최소연산횟수: 0, 결과값: 1 출력 후 함수 종료
    if n == 1 {
        print("\(0)")
        print("\(1)")
        return
    }

    for j in 2...n {
        /// --1
        dp[j] = dp[j-1] + 1
        answer[j] = j-1
        
        /// 2로 나누어 떨어질 경우
        if j%2 == 0 && dp[j/2]+1 < dp[j] {
            dp[j] = dp[j/2]+1
            answer[j] = j/2 // 경로 대입
        }
        /// 3으로 나누어 떨어질 경우
        if j%3 == 0 && dp[j/3]+1 < dp[j] {
            dp[j] = dp[j/3]+1
            answer[j] = j/3 // 경로 대입
        }
    }

    print(dp[n]) // 연산 최소 횟수 출력

    var idx = n

    while idx != -1 {
        print(String(format: "%d ", idx), terminator: "") // 최소 경로 출력
        idx = answer[idx] // 최소 경로 추적(거꾸로)
    }
    print()
}

p() //함수 호출



/// 재귀로 풀려다가 실패한 버전
//func problem(n: Int) -> Void {
//    var x = n 
//    if x == 1 {
//        print(String(format: "%d, ", x), terminator: "")
//        return
//    }
//
//    if (x-1)%3 == 2 {
//        x = x-1
////        print(String(format: "%d, ", x), terminator: "")
//
//        if (x & 0x1) == 0 {
//            print(String(format: "%d, ", x), terminator: "")
//            return problem(n: x>>1)
//        }
//        print(String(format: "%d, ", x), terminator: "")
//        return problem(n: x/3)
//    }
//
//    /* condition 1. if x%3 == 0, then x/3*/
//    if x%3 == 0 {
////        print("x = \(x)")
//        print(String(format: "%d, ", x), terminator: "")
//        return problem(n: x/3)
//    }
//
//    /* condition 2. if x%2 == 0, then x/2 */
//    if (x & 0x1) == 0 {
//        print(String(format: "%d, ", x), terminator: "")
//        return problem(n: x>>1)
//    }
//
//
//
//    /* condition 3. x-- */
//    print(String(format: "%d, ", x), terminator: "")
//    return problem(n: x-1)
//}