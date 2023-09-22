package XauKiTu;

import java.util.Scanner;

public class J03008_SoDep_3 {
    public static boolean check(String num) {
        for (int i = 0; i < num.length(); i++) {
            if (num.charAt(i) != '2' && num.charAt(i) != '3' && num.charAt(i) != '5' && num.charAt(i) != '7')
                return false;
        }
        String rev = new StringBuilder(num).reverse().toString();
        return num.equals(rev);
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
