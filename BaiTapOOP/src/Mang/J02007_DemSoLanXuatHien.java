package Mang;

import java.util.Scanner;
import java.util.HashMap;

public class J02007_DemSoLanXuatHien {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            int a[] = new int[n];
            HashMap<Integer, Integer> res = new HashMap<Integer, Integer>();
            for(int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
                if (res.containsKey(a[j])) {
                    res.put(a[j], res.get(a[j]) + 1);
                } else {
                    res.put(a[j], 1);
                }
            }

            System.out.println("Test " + i + ":");
            for (int it : a) {
                if(res.get(it) > 0) {
                    System.out.println(it + " xuat hien " + res.get(it) + " lan");
                    res.put(it, 0);
                }
            }
        }
    }
}
