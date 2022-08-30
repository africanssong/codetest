import java.util.Scanner;

/**
 * #1094
 * 막대기
 * 2022.08.30
 * */
public class week3_2_1094 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        System.out.println(hammingWeight(n));
    }
    
    /* 해밍 웨이트 구하는 함수*/
    public static int hammingWeight(int n){
        int res = 0;
        while (n != 0){
            int tmp = n & 0x01;
            if(tmp == 1){
                res += 1;
            }
            n = n >> 1;
        }
        return res;
    }
}
