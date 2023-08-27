package LapTrinhJavaCoBan;

import java.util.*;

public class J01021_TinhLuyThua {

    static int m = (int) 1e9 + 7;

    static long powMod(long a, long b) {
        if (b == 0) {
            return 1;
        }
        long x = powMod(a, b / 2);
        if (b % 2 == 0) {
            return x * x % m;
        } else {
            return a * (x * x % m) % m;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, b;
        while (true) {
            a = sc.nextLong();
            b = sc.nextLong();
            if (a == 0 && b == 0) {
                break;
            }
            System.out.println(powMod(a, b));
        }
    }
}
