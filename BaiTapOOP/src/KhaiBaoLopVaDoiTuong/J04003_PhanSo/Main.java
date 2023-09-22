package KhaiBaoLopVaDoiTuong.J04003_PhanSo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long tu = sc.nextLong();
        long mau = sc.nextLong();
        PhanSo kq = new PhanSo(tu, mau);
        kq.rutGon();
        System.out.println(kq.toString());
    }
}
