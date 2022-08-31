import java.util.Scanner;

/**
 * #2167
 * 2차원 배열의 합
 * 2022.08.27
 */
public class week2_2 {
    public static void main(String[] args) {
        /*첫째 줄에 배열의 크기 N, M(1 ≤ N, M ≤ 300)이 주어진다.
        다음 N개의 줄에는 M개의 정수로 배열이 주어진다. 배열에 포함되어 있는 수는 절댓값이 10,000보다 작거나 같은 정수이다.
        그 다음 줄에는 합을 구할 부분의 개수 K(1 ≤ K ≤ 10,000)가 주어진다.
        다음 K개의 줄에는 네 개의 정수로 i, j, x, y가 주어진다(1 ≤ i ≤ x ≤ N, 1 ≤ j ≤ y ≤ M).*/

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();

        /* n X m 배열 저장 */
        int[][] numArr = new int[n+1][m+1];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                numArr[i][j] = in.nextInt();
            }
        }

        int k = in.nextInt();
        for(int i=0; i<k; i++){
            int tmp = 0;
            /* (a,b) 부터 (c,d) 까지의 구간합 */
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();
            int d = in.nextInt();
            for(int j=a; j<=c; j++) {
                for (int l = b; l <= d; l++) {
                    tmp += numArr[j][l];
                }
            }
            System.out.println(tmp);
        }
    }
}
