package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01006_TinhSoFibonacci {

    static long[] F = new long[100];

    public static void fibo() {
        F[1] = F[2] = 1;
        int i = 3;
        while (i <= 92) {
            F[i] = F[i - 1] + F[i - 2];
            i++;
        }
    }

    public static void main(String[] args) {
        fibo();

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            System.out.println(F[n]);
        }
    }
}
