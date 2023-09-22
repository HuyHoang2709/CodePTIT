package Mang;

import java.util.Scanner;

public class J02106_MaTranNhiPhan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int dem = 0;
            for (int j = 1; j <= 3; j++) {
                x = sc.nextInt();
                if (x == 1) dem++;
            }
            if (dem > 1) cnt++;
        }
        System.out.println(cnt);
    }
}
