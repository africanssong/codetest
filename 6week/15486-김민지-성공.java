import java.util.Arrays;
import java.util.Queue;
import java.util.Scanner;

/**
 * #15486
 * 퇴사 2
 * 2022-10-07
 */
public class week6_15486 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] time = new int[n + 2];
        int[] pay = new int[n + 2];
        int[] dp = new int[n + 2];

        for(int i=1; i<=n; i++) {
            time[i] = in.nextInt();
            pay[i] = in.nextInt();
        }

        int max = Integer.MIN_VALUE;
        for(int i=1;i<=n+1;i++) {
            /* 최대 금액 갱신 */
            max = Math.max(max, dp[i]);

            if(i + time[i] <= n+1) {
                dp[i + time[i]] = Math.max(max + pay[i], dp[i + time[i]]);
            }
        }
        System.out.println(max);
    }
}
