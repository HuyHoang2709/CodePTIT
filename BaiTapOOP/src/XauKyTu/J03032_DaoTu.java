package XauKyTu;

import java.util.Scanner;

public class J03032_DaoTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            String[] a = s.split("\\s");
            for (String i : a) {
                System.out.print(new StringBuilder(i).reverse().toString() + " ");
            }
            System.out.print("\n");
        }
    }
}
