package VaoRaFile.J07051_TInhTienPhong;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner("KHACHHANG.in");
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<KhachHang> ds = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            ds.add(new KhachHang(String.format("KH%02d", i), sc.nextLine(), Integer.parseInt(sc.nextLine()), sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
        Collections.sort(ds, Collections.reverseOrder());
        for (KhachHang kh : ds) {
            System.out.println(kh);
        }
    }
}
