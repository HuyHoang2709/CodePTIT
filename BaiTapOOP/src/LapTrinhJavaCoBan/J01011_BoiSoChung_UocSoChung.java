package LapTrinhJavaCoBan;

import java.util.*;

public class J01011_BoiSoChung_UocSoChung {

    public static long GCD(long a, long b) {
        while (b != 0) {
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long gcd = GCD(a, b);
            long lcm = a * b / gcd;
            System.out.println(lcm + " " + gcd);
        }
    }
}
