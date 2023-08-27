package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01024_SoTamPhan {

    public static boolean kiemTra(int n) {
        while (n > 0) {
            int tmp = n % 10;
            if (tmp > 2) {
                return false;
            }
            n /= 10;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            if (kiemTra(n)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
