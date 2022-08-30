import java.util.Scanner;

public class week1_1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int cnt = 0;

        int n = in.nextInt();
        int[] nArr = new int[n];

        for(int i=0; i<n; i++){
            nArr[i] = in.nextInt();
        }
        for(int i=0; i<n;i++){
            if(isPrime(nArr[i])){
                cnt += 1;
            }
        }
        System.out.printf("%d", cnt);
    }
    public static boolean isPrime(int number) {
        if(number == 1) return false;

        for(int i=2; i<=Math.sqrt(number); i++) {
            if(number % i == 0) return false;
        }
        return true;
    }
}
