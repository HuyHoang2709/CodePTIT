package HuongDoiTuongCoBan.J04003_PhanSo;

import java.util.*;
import static HuongDoiTuongCoBan.J04003_PhanSo.PhanSo.*;

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
