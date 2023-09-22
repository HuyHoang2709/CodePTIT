package XauKyTu;

import java.util.Scanner;

public class J03024_SoUuThe {
    public static int check(String s) {
        int chan = 0;
        int le = 0;
        for (int i = 0; i < s.length(); i++) {
            char x = s.charAt(i);
            if (x < '0' || x > '9') return -1;
            if (x % 2 == 0) chan++;
            else le++;
        }
        if ((chan > le && s.length() % 2 == 0) || (chan < le && s.length() % 2 == 1)) return 1;
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            if (check(s) == 1) System.out.println("YES");
            else if (check(s) == 0) System.out.println("NO");
            else System.out.println("INVALID");
        }
    }
}
