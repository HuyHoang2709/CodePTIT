package KhaiBaoLopVaDoiTuong.J04009_DienTichTamGiac;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Triangle A = new Triangle(sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
            System.out.println(A);
        }
    }
}
