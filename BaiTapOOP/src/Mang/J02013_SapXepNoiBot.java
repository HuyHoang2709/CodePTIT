package Mang;

import java.util.Scanner;

public class J02013_SapXepNoiBot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            boolean ok = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j+1]) {
                    ok = true;
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }

            if (ok) {
                System.out.print("Buoc " + (cnt++) + ": ");
                for (int j = 0; j < n; j++) System.out.print(a[j] + " ");
                System.out.print("\n");
            } else break;
        }
    }
}
