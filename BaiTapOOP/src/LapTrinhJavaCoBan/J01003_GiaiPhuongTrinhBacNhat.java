package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01003_GiaiPhuongTrinhBacNhat {

    public static void main(String[] args) {
        Scanner getInput = new Scanner(System.in);
        double a = getInput.nextDouble();
        double b = getInput.nextDouble();
        if (a == 0) {
            if (b != 0) {
                System.out.println("VN");
            } else {
                System.out.println("VSN");
            }
        } else {
            double x = -b / a;
            System.out.printf("%.2f", x);
        }
    }
}
