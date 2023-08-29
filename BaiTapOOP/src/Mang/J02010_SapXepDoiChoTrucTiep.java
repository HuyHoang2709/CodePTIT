package Mang;

import java.util.Scanner;

public class J02010_SapXepDoiChoTrucTiep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            boolean check = true;
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    check = false;
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            if (check) break;
            else {
                System.out.print("Buoc " + cnt + ": ");
                for (int j = 0; j < n; j++) System.out.print(a[j] + " ");
                System.out.print("\n");
                cnt++;
            }
        }
    }
}
