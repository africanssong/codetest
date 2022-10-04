import java.util.Scanner;

/**
 * #2225
 * 합분해
 * 2022-10-04
 */
public class week5_2225 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int k = in.nextInt();

        int[][] dp = new int[k+1][n+1];

        /* 초기값 설정 */
        for(int i=1; i<=k; i++){
            dp[i][0] = 1;
        }
        /* 해당 [k][n] 값은 이전의 값들로부터 생성 */
        for(int i=1; i<=k; i++){
            for(int j=1; j<=n; j++){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000000;
            }
        }
        System.out.println(dp[k][n]);
    }
}

