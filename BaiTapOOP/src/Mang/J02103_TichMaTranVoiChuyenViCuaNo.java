package Mang;

import java.util.Scanner;

public class J02103_TichMaTranVoiChuyenViCuaNo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int it = 1; it <= t; it++) {
            int m = sc.nextInt();
            int n = sc.nextInt();
            int[][] a = new int[m][n];
            int[][] b = new int[n][m];
            int[][] c = new int[m][m];
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    a[i][j] = sc.nextInt();
                    b[j][i] = a[i][j];
                }
            }

            System.out.printf("Test %d:\n", it);

            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    for(int k = 0; k < m; k++) {
                        c[i][k] += a[i][j] * b[j][k];
                    }
                }
            }
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    System.out.print(c[i][j] + " ");
                }
                System.out.print("\n");
            }
        }
    }
}
