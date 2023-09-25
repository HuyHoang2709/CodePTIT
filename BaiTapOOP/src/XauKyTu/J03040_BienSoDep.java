package XauKyTu;

import java.util.Scanner;

public class J03040_BienSoDep {
    public static boolean kiemTra(String bienSo) {
        char[] a = new char[5];
        a[0] = bienSo.charAt(5);
        a[1] = bienSo.charAt(6);
        a[2] = bienSo.charAt(7);
        a[3] = bienSo.charAt(9);
        a[4] = bienSo.charAt(10);
        if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4]) return true;
        else if (a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return true;
        boolean ok = true;
        for (int i = 0; i < 5; i++) {
            if (a[i] != '6' && a[i] != '8') {
                ok = false;
                break;
            }
        }
        return ok;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String bienSo = sc.nextLine();
            if (kiemTra(bienSo)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
