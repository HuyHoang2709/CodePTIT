package HuongDoiTuongCoBan.J04006_KhaiBaoLopSinhVien;

import java.text.SimpleDateFormat;
import java.util.Date;

public class SinhVien {
    private String maSinhVien = "B20DCCN001";
    private String hoTen;
    private String lop;
    private String ngaySinh;
    private double gpa;

    SinhVien(String hoTen, String lop, String ngaySinh, double gpa) {
        this.hoTen = hoTen;
        this.lop = lop;
        this.ngaySinh = ngaySinh;
        this.gpa = gpa;
    }

    public String toString() {
        return maSinhVien + " " + hoTen + " " + lop + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaySinh) + " " + String.format("%.2f", gpa);
    }
}
