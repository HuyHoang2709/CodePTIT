package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01022_XauNhiPhan {
    
    static long f[] = new long[100];
    
    public static void sinh() {
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= 92; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
    }
    
    public static int binaryWord(int n, long i) {
        if (n == 1) {
            return 0;
        }
        if (n == 2) {
            return 1;
        }
        if (i <= f[n - 2]) {
            return binaryWord(n - 2, i);
        }
        return binaryWord(n - 1, i - f[n - 2]);
    }
    
    public static void main(String[] args) {
        sinh();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long i = sc.nextLong();
            System.out.println(binaryWord(n, i));
        }
    }
}
