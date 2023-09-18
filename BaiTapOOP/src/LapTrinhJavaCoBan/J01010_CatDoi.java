package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01010_CatDoi {
    public static String chuyenDoi(long n) {
        long res = 0;
        int cnt = 0;
        boolean ok = true;
        while (n > 0) {
            long temp = n % 10;
            if (temp == 0 || temp == 8 || temp == 9) {
                res += 0;
            } else if (temp == 1) {
                res += (long) Math.pow(10, cnt);
            } else {
                ok = false;
                break;
            }
            n /= 10;
            cnt++;
        }
        if (res == 0) ok = false;
        if (!ok) return "INVALID";
        return "" + res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            System.out.println(chuyenDoi(n));
        }
    }
}
