package XauKyTu;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class J07003_TachDoiVaTinhTong {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        String num = sc.nextLine();
        while (num.length() > 1) {
            int n = num.length();
            BigInteger a = new BigInteger(num.substring(0, n / 2));
            BigInteger b = new BigInteger(num.substring(n / 2));
            BigInteger c = a.add(b);
            num = c.toString();
            System.out.println(num);
        }
    }
}
