package Mang;

import java.util.TreeSet;
import java.util.Scanner;

public class J02006_HopCuaHaiDaySo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int s = n + m;
        TreeSet<Integer> res = new TreeSet<Integer>();
        while (s-- > 0) {
            int x = sc.nextInt();
            res.add(x);
        }
        for (Integer i : res) {
            System.out.print(i + " ");
        }
    }
}
