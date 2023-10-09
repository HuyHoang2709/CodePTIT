package KhaiBaoLopVaDoiTuong.J04002_KhaiBaoLopHinhChuNhat;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double cd = sc.nextDouble();
        double cr = sc.nextDouble();
        String mau = sc.next();
        if (cd > 0 && cr > 0) {
            Rectangle hcn = new Rectangle(cd, cr, mau);
            System.out.printf("%.0f %.0f %s", hcn.findPerimeter(), hcn.findArea(), hcn.getColor());
        } else {
            System.out.println("INVALID");
        }
    }
}
