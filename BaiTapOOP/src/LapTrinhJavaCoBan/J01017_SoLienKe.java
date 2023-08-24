package LapTrinhJavaCoBan;

import java.util.*;

public class J01017_SoLienKe {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            boolean ok = true;
            while (n > 10) {
                long n1 = n % 10;
                n /= 10;
                long n2 = n % 10;
                n /= 10;
                if (Math.abs(n1 - n2) != 1) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
