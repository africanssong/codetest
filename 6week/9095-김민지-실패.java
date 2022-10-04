import java.util.Scanner;

/**
 * #9095
 * 가장 큰 증가 부분 수열
 * 2022-10-04
 */
public class week6_9095 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        int[] dp = new int[13];

        /* 1,2,3의 경우의 수 */
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        /* 4부터 12까지의 점화식 */
        for(int j=4; j<=12; j++){
            dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
        }

        /* 테스트 케이스 */
        for(int i=0; i<t; i++){
            /* n은 11보다 작은 양수 */
            int n = in.nextInt();
            System.out.println(dp[n]);
        }
    }
}
