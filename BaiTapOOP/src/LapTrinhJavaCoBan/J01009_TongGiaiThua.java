package LapTrinhJavaCoBan;

import java.util.*;

public class J01009_TongGiaiThua {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long tong = 0;
        long tich = 1;
        int cnt = 1;
        int n = sc.nextInt();
        while (cnt <= n) {
            tich *= cnt;
            tong += tich;
            cnt++;
        }
        System.out.println(tong);
    }
}
