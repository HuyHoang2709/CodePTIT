package XauKyTu;

import java.math.BigInteger;
import java.util.*;

public class J03013_HieuSoNguyenLon1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger kq = a.subtract(b).abs();
            StringBuilder res = new StringBuilder(kq.toString());
            int maxLength = Math.max(a.toString().length(), b.toString().length());
            while(res.length() < maxLength) {
                res = res.insert(0, "0");
            }
            System.out.println(res);
        }
    }
}
