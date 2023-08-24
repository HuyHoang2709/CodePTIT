package LapTrinhJavaCoBan;

import java.util.*;

public class J01016_ChuSo4VaChuSo7 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long num = sc.nextLong();
        int cnt = 0;
        while (num > 0) {
            long tmp = num % 10;
            if (tmp == 4 || tmp == 7) {
                cnt++;
            }
            num /= 10;
        }
        if (cnt == 4 || cnt == 7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
