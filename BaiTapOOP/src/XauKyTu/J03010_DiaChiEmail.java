package XauKyTu;

import java.util.ArrayList;
import java.util.Scanner;

public class J03010_DiaChiEmail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<String> emails = new ArrayList<>();
        while (t-- > 0) {
            String s = sc.nextLine().trim().toLowerCase();
            String[] a = s.split("\\s+");
            StringBuilder email = new StringBuilder(a[a.length - 1]);
            for (int i = 0; i < a.length - 1; i++) {
                email.insert(email.length(), a[i].charAt(0));
            }
            if (emails.contains(email.toString())) {
                int idx = 2;
                while (emails.contains(email.append(idx).toString())) {
                    idx++;
                    email.deleteCharAt(email.length()-1);
                }
            }
            System.out.println(email.toString() + "@ptit.edu.vn");
            emails.add(email.toString());
        }
    }
}
