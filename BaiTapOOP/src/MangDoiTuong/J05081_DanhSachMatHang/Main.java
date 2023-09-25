package MangDoiTuong.J05081_DanhSachMatHang;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<MatHang> ds = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            ds.add(new MatHang(String.format("MH%02d", i), sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine())));
        }
        Collections.sort(ds);
        for (MatHang i : ds) {
            System.out.println(i);
        }
    }
}
