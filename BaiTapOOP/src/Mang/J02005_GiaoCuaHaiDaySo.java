package Mang;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.HashSet;

public class J02005_GiaoCuaHaiDaySo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        HashSet<Integer> a = new HashSet<Integer>();
        HashSet<Integer> b = new HashSet<Integer>();
        int x;
        while (n-- > 0) {
            x = sc.nextInt();
            a.add(x);
        }
        while (m-- > 0) {
            x = sc.nextInt();
            b.add(x);
        }

        ArrayList<Integer> res = new ArrayList<Integer>();
        for (Integer i : a) {
            if (b.contains(i)) {
                res.add(i);
            }
        }
        Collections.sort(res);
        for (Integer i : res) {
            System.out.print(i + " ");
        }
    }
}
