package HuongDoiTuongCoBan.J04004_TongPhanSo;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PhanSo a = new PhanSo(sc.nextLong(), sc.nextLong());
        PhanSo b = new PhanSo(sc.nextLong(), sc.nextLong());
        PhanSo tong = PhanSo.tongPhanSo(a, b);
        System.out.println(tong.toString());
    }
}
