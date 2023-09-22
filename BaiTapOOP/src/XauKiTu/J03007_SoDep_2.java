package XauKiTu;

import java.util.Scanner;

public class J03007_SoDep_2 {
    public static boolean check(String num) {
        if (num.charAt(0) != '8' || num.charAt(num.length() - 1) != '8') return false;

        int tong = 0;
        for (int i = 0; i < num.length(); i++) {
            tong += num.charAt(i) - '0';
        }
        String rev = new StringBuilder(num).reverse().toString();
        return num.equals(rev) && tong % 10 == 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String num = sc.nextLine();
            if (check(num)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
