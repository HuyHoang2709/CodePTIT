package KhaiBaoLopVaDoiTuong.J04013_BaiToanTuyenSinh;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Examinee A = new Examinee(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
        System.out.println(A);
    }
}
