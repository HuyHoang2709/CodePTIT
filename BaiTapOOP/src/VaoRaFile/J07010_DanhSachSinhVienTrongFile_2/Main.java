package VaoRaFile.J07010_DanhSachSinhVienTrongFile_2;

import java.io.*;
import java.text.ParseException;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("SV.in"));
        int n = sc.nextInt();
        ArrayList<SinhVien> sv = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            String tmp = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String ngaySinh = sc.nextLine();
            double gpa = sc.nextDouble();
            sv.add(new SinhVien(i, ten, lop, ngaySinh, gpa));
        }
        for(SinhVien i : sv) {
            i.showInfo();
        }
    }
}
