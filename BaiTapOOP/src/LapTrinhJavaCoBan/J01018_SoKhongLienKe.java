package LapTrinhJavaCoBan;

import java.util.*;

public class J01018_SoKhongLienKe {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long sum = 0;
            long n = sc.nextLong();
            boolean ok = true;
            while (n > 10) {
                long n1 = n % 10;
                n /= 10;
                long n2 = n % 10;
                sum += n1;
                if (Math.abs(n1 - n2) != 2) {
                    ok = false;
                    break;
                }
            }
            sum += n;
            if (sum % 10 != 0) {
                ok = false;
            }
            if (ok) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
