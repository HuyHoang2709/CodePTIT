package LapTrinhJavaCoBan;

import java.util.*;

public class J01012_UocSoChiaHetCho2 {

    public static int dem(int n) {
        int cnt = 0;
        int i = 1;
        while (i <= n / i) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    cnt++;
                }
                if ((n / i) % 2 == 0 && i != n / i) {
                    cnt++;
                }
            }
            i++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            System.out.println(dem(n));
        }
    }
}
