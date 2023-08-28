package Mang;

import java.util.Scanner;

public class J02008_BoiSoNhoNhatCuaNSoNguyenDuongDauTien {
    public static long lcm(long a, long b) {
        long tich = a * b;
        while(b != 0) {
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return tich / a;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            long n = sc.nextInt();
            long res = 1;
            for(long i = 2; i <= n; i++) {
                res = lcm(res, i);
            }
            System.out.println(res);
        }
    }
}
