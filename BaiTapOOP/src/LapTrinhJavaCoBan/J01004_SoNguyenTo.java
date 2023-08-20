package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01004_SoNguyenTo {

    public static boolean kiemTra(int n) {
        if (n <= 3) {
            return n > 1;
        } else {
            if (n % 2 == 0 || n % 3 == 0) {
                return false;
            } else {
                int sqr = (int) Math.sqrt(n);
                for (int i = 5; i <= sqr; i += 6) {
                    if (n % i == 0 || n % (i + 2) == 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner getInput = new Scanner(System.in);
        int n = getInput.nextInt();
        for (int i = 1; i <= n; i++) {
            int x = getInput.nextInt();
            if (kiemTra(x)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
