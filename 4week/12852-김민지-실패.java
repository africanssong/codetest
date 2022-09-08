import java.util.Scanner;

/**
 * #12852
 * 1로 만들기 2
 * 2022-09-01
 */
public class week4_12852 {
    /*
    * ------------------ 문제 ------------------
    * 정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.
    * X가 3으로 나누어 떨어지면, 3으로 나눈다.
    * X가 2로 나누어 떨어지면, 2로 나눈다.
    * 1을 뺀다.
    * 정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.
    *
    * 첫째 줄에 1보다 크거나 같고, 106보다 작거나 같은 자연수 N이 주어진다.
    * -----------------------------------------
    * */

    /*
    *  N = 1일 때만 연산 횟수를 0으로 설정해 놓고,
    * dp[i] = min(dp[i / 3], dp[i / 2], dp[i - 1])을 점화식으로 세우고
    * bottom-up 방식으로 다이나믹 프로그래밍 소스코드를 구현하면 끝입니다.
    * */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        StringBuilder stringBuilder = new StringBuilder();

        int n = in.nextInt();

        /* dp 배열에는 n을 1로 만들기 위한 최솟값을 저장 */
        int[] dp = new int[n + 2];
        /* trace 배열에는 연산을 사용하였을 때 N 전의 값이 무엇인지 저장한다. */
        int[] trace = new int[n + 2];

        /* 초기 값 (n = 1일 때 연산 횟수는 0) */
        dp[1] = 0;
        trace[1] = -1;

        /* X/3 연산을 사용하여 연산 횟수의 최솟값을 구하였다면 trace 배열에는 N/3 값이 저장된다. */
        for(int x = 2; x <= n; x++){
            /* 1을 뺀다 의 연산 카운트 */
            dp[x] = dp[x - 1] + 1;
            /* 1을 뺀다 */
            trace[x] = x - 1;

            /* 2로 나누어 떨어지면  &&  2로 나눈 수의 연산 횟수 + 1이 x의 연산 횟수보다 작다. (연산 횟수의 최솟값이어야 하니까) */
            if(x % 2 == 0 && dp[x] > dp[x / 2] + 1){
                /* 2로 나눈 수의 연산 횟수 + 1 */
                dp[x] = dp[x / 2] + 1;
                /* 2로 나누기 */
                trace[x] = x / 2;
            }
            /* 3으로 나누어 떨어지면  &&  3로 나눈 수의 연산 횟수 + 1이 x의 연산 횟수보다 작다. (연산 횟수의 최솟값이어야 하니까) */
            if(x % 3 == 0 && dp[x] > dp[x / 3] + 1){
                /* 3으로 나눈 수의 연산 횟수 + 1 */
                dp[x] = dp[x / 3] + 1;
                /* 3으로 나누기 */
                trace[x] = x / 3;
            }
        }
        stringBuilder.append(dp[n]).append("\n");

        /* 중간 연산 과정 값 찍기 */
        int index = n;
        for(int x = 0; x <= dp[n]; x++){
            stringBuilder.append(index).append(" ");
            index = trace[index];
        }
        System.out.println(stringBuilder);
    }
}
