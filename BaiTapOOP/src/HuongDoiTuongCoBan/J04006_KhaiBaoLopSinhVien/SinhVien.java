package HuongDoiTuongCoBan.J04006_KhaiBaoLopSinhVien;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SinhVien {
    private String ma = "B20DCCN001";
    private String ten;
    private String lop;
    private Date birthday;
    private double gpa;

    SinhVien(String hoTen, String maLop, String ngaySinh, double gpa) throws ParseException {
        this.ten = hoTen;
        this.lop = maLop;
        this.birthday = new SimpleDateFormat("dd/MM/yyyy").parse(ngaySinh);
        this.gpa = gpa;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + lop + " " + new SimpleDateFormat("dd/MM/yyyy").format(birthday) + " " + String.format("%.2f", gpa);
    }
}
