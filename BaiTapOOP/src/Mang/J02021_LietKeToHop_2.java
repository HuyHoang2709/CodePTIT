package Mang;

import java.util.Scanner;

public class J02021_LietKeToHop_2 {
    static int[] c = new int[15];
    static int n, k;
    static int cnt = 0;

    public static void in() {
        for (int i = 1; i <= k; i++) {
            System.out.print(c[i]);
        }
        System.out.print(" ");
    }

    public static void Try(int i) {
        for (int j = c[i - 1] + 1; j <= n - k + i; j++) {
            c[i] = j;
            if (i == k) {
                in();
                cnt++;
            } else Try(i + 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        Try(1);
        System.out.printf("\nTong cong co %d to hop", cnt);
    }
}
