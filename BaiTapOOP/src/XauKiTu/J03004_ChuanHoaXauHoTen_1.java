package XauKiTu;

import java.util.Scanner;

public class J03004_ChuanHoaXauHoTen_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String hoTen = sc.nextLine().trim().toLowerCase();
            String[] a = hoTen.split("\\s+");
            for (String i : a) {
                System.out.print(String.valueOf(i.charAt(0)).toUpperCase() + i.substring(1) + " ");
            }
            System.out.print("\n");
        }
    }
}
