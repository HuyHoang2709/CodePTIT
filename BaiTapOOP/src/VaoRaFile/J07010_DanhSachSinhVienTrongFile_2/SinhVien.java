package VaoRaFile.J07010_DanhSachSinhVienTrongFile_2;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SinhVien {
    private String maSV;
    private String hoTen;
    private String lop;
    private Date ngaySinh;
    private double gpa;

    SinhVien(int ma, String ten, String lop, String ngaySinh, double gpa) throws ParseException {
        if (ma < 10) {
            this.maSV = "B20DCCN00" + ma;
        } else {
            this.maSV = "B20DCCN0" + ma;
        }
        this.hoTen = ten;
        this.lop = lop;
        this.ngaySinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaySinh);
        this.gpa = gpa;
    }

    public void showInfo() {
        System.out.println(maSV + " " + hoTen + " " + lop + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaySinh) + " " + String.format("%.2f", gpa));
    }
}
