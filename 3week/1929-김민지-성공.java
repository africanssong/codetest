import java.util.Scanner;

/**
 * #1929
 * 소수 구하기
 */
public class week3_1 {
    /* M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오. */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int m = in.nextInt();
        int n = in.nextInt();

        /* boolean 배열은 false로 초기화 된다. */
        /* n+1 크기의 배열 선언 */
        boolean[] isNotPrime = new boolean[n+1];
        /* 0과 1은 소수가 아님 */
        isNotPrime[0] = true;
        isNotPrime[1] = true;
        /* 2부터 루트n까지 소수 확인 */
        for(int i=2; i<=Math.sqrt(n); i++){
            /* 소수인 경우 */
            if(!isNotPrime[i]){
                /* 해당 소수의 배수를 true로 바꿔줌 (false가 소수) */
                for(int j=i*i; j<=n; j+=i){
                    isNotPrime[j] = true;
                }
            }
        }
        /* m부터 n까지 소수인 경우(false)만 출력 */
        for(int i=m; i<=n; i++){
            if(!isNotPrime[i]){
                System.out.println(i);
            }
        }
    }
}
