package LapTrinhJavaCoBan;

import java.math.BigInteger;
import java.util.Scanner;

public class J03033_BoiSoChungNhoNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            BigInteger a = new BigInteger(sc.nextLine());
            BigInteger b = new BigInteger(sc.nextLine());
            BigInteger tich = a.multiply(b);
            BigInteger ucln = a.gcd(b);
            System.out.println(tich.divide(ucln));
        }
    }
}
