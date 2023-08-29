package Mang;

import java.util.Scanner;

public class J02014_DiemCanBang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] f = new int[n];
            int tong = 0;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                tong += a[i];
                f[i] = tong;
            }

            int res = -1;
            for (int i = 0; i < n - 1; i++) {
                if (f[i] - a[i] == tong - f[i]) {
                    res = i+1;
                    break;
                }
            }
            System.out.println(res);
        }
    }
}
