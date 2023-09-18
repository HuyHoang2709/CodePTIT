package Mang;

import java.util.Arrays;
import java.util.Scanner;

public class J02022_SoXaCach {
    static int n;
    static int[] p = new int[15];
    static int[] f = new int[15];

    public static boolean check() {
        for(int i = 1; i < n; i++) {
            if(Math.abs(p[i+1] - p[i]) == 1) {
                return false;
            }
        }
        return true;
    }

    public static void in() {
        if(check()) {
            for(int i = 1; i <= n; i++) {
                System.out.print(p[i]);
            }
            System.out.print("\n");
        }
    }

    public static void Try(int i) {
        for (int j = 1; j <= n; j++) {
            if (f[j] == 0) {
                p[i] = j;
                f[j] = 1;

                if (i == n) in();
                else Try(i+1);
                f[j] = 0;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            n = sc.nextInt();
            Arrays.fill(p, 0, 14, 0);
            Arrays.fill(f, 0, 14, 0);
            Try(1);
            System.out.print("\n");
        }
    }
}
