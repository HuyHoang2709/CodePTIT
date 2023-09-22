package XauKyTu;

import java.util.Scanner;

public class J03021_DienThoaiCucGach {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine().toUpperCase();
            StringBuilder kq = new StringBuilder();
            for (int i = 0; i < s.length(); i++) {
                char x = s.charAt(i);
                if (x <= 'C') kq.append(2);
                else if (x <= 'F') kq.append(3);
                else if (x <= 'I') kq.append(4);
                else if (x <= 'L') kq.append(5);
                else if (x <= 'O') kq.append(6);
                else if (x <= 'S') kq.append(7);
                else if (x <= 'V') kq.append(8);
                else kq.append(9);
            }
            String rev = new StringBuilder(kq).reverse().toString();
            if(kq.toString().equals(rev)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
