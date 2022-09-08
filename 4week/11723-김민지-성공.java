import java.util.HashSet;
import java.util.Objects;
import java.util.Scanner;
import java.util.Set;

/**
 * #11723
 * 집합
 * 2022.08.31
 */
public class week4_11723 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        /* HashSet 집합 선언 */
        Set<Integer> set = new HashSet<>();

        int n = in.nextInt();

        /* 출력 스트링 */
        StringBuilder resStr = new StringBuilder();
        for(int i=0; i<n; i++){
            /* 연산 이름 */
            String func = in.next();
            int x = 0;
            /* "all" 과 "empty"인 경우, x값을 입력 받지 않고 연산 수행 */
            if(!(Objects.equals(func, "all") || Objects.equals(func, "empty"))){
                x = in.nextInt();
            }
            switch (func){
                case "add":
                    set.add(x);
                    break;
                case "remove":
                    set.remove(x);
                    break;
                case "check":
                    /* 집합 set이 x를 포함하고 있으면 true를, 포함하지 않으면 false를 반환 */
                    boolean tmp = set.contains(x);
                    if(tmp){
                        /* 출력 스트링에 추가 */
                        resStr.append(1).append("\n");
                    } else {
                        /* 출력 스트링에 추가 */
                        resStr.append(0).append("\n");
                    }
                    break;
                case "toggle":
                    /* 집합 set이 x를 포함하고 있으면 true를, 포함하지 않으면 false를 반환 */
                    tmp = set.contains(x);
                    if(tmp){
                        /* 포함하고 있으면 제거 */
                        set.remove(x);
                    } else {
                        /* 포함하고 있지 않으면 추가 */
                        set.add(x);
                    }
                    break;
                case "all":
                    /* 1~20으로 초기화 (다른 방법이 있을 것 같은데 못 찾았음) */
                    set.clear();
                    for(int j=0; j<20; j++){
                        set.add(j+1);
                    }
                    break;
                case "empty":
                    /* 공집합으로 초기화 */
                    set.clear();
                    break;
                default:
                    break;
            }
        }
        System.out.println(resStr);
    }
}
