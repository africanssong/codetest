import java.util.Scanner;

/**
 *  #11659
 *  구간합 구하기 4
 */
public class week2_1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        /* 수의 개수 */
        int n = in.nextInt();
        /* 합을 구해야 하는 횟수*/
        int m = in.nextInt();

        int[] numArr = new int[n+1];
        int[] resArr = new int[m];
        StringBuilder str = new StringBuilder();
        int tmp = 0;
        /* n개의 숫자를 더해서 배열에 저장 */
        for(int i=1; i<=n; i++){
            numArr[0] = 0;
            tmp += in.nextInt();
            numArr[i] = tmp;
        }
        /* 구간합 구하기 */
        int a, b;
        for(int i=0; i<m; i++){
            a = in.nextInt();
            b = in.nextInt();
            resArr[i] = numArr[b] - numArr[a-1];
            str.append(resArr[i]).append("\n");
        }
        System.out.println(str);
    }
}
