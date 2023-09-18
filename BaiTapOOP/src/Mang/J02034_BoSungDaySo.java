package Mang;

import java.util.ArrayList;
import java.util.Scanner;

public class J02034_BoSungDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> a = new ArrayList<>();
        int maxItem = 0;
        int n = sc.nextInt();
        int tmp;
        while (n-- > 0) {
            tmp = sc.nextInt();
            a.add(tmp);
            if (maxItem < tmp) maxItem = tmp;
        }
        boolean ok = true;
        for (int i = 1; i <= maxItem; i++) {
            if (!a.contains(i)) {
                ok = false;
                System.out.println(i);
            }
        }
        if (ok) System.out.println("Excellent!");
    }
}
