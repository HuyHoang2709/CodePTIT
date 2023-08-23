package LapTrinhJavaCoBan;

import java.util.*;

public class J01014_UocSoNguyenToLonNhat {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long res = -1;
            long n = sc.nextLong();
            int i = 2;
            while (i <= n / i) {
                if (n % i == 0) {
                    res = Math.max(res, i);
                    while (n % i == 0) {
                        n /= i;
                    }
                }
                i++;
            }

            if (n > 1) {
                res = Math.max(res, n);
            }
            System.out.println(res);
        }
    }
}
