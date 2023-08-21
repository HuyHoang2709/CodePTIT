package LapTrinhJavaCoBan;

import java.util.*;

public class J01008_PhanTichThuaSoNguyenTo {

    public static void phanTich(int cnt, int n) {
        System.out.print("Test " + cnt + ": ");
        int dem = 0;
        while (n % 2 == 0) {
            n /= 2;
            dem++;
        }
        if (dem > 0) {
            System.out.print("2(" + dem + ") ");
        }
        dem = 0;
        if (n > 2) {
            int sqr = (int) Math.sqrt(n);
            for (int i = 3; i <= sqr; i += 2) {
                if (n % i == 0) {
                    while (n % i == 0) {
                        n /= i;
                        dem++;
                    }
                    System.out.print(i + "(" + dem + ") ");
                    dem = 0;
                }
            }
            if (n > 2) {
                System.out.print(n + "(1)");
            }
        }
        System.out.print("\n");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int cnt = 1;
        while (t-- > 0) {
            int n = sc.nextInt();
            phanTich(cnt, n);
            cnt++;
        }
    }
}
