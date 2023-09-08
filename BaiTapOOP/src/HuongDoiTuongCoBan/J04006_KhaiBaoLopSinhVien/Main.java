package HuongDoiTuongCoBan.J04006_KhaiBaoLopSinhVien;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        String ten = sc.nextLine();
//        String lop = sc.nextLine();
//        String ngaySinh = sc.nextLine();
//        double gpa = sc.nextDouble();
        SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
        System.out.println(sv);
    }
}
