package LapTrinhJavaCoBan;

import java.util.*;

public class J01007_KiemTraSoFibonacci {

    static long[] F = new long[100];

    public static void fibo() {
        F[0] = 0;
        F[1] = 1;
        for(int i = 2; i <= 92; i++) {
            F[i] = F[i - 1] + F[i - 2];
        }
    }

    public static void main(String[] args) {
        fibo();

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long n = sc.nextLong();
            int idx = Arrays.binarySearch(F, 0, 92, n);
            if(idx >= 0) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
