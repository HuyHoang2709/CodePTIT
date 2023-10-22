package VaoRaFile.J07051_TInhTienPhong;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.concurrent.TimeUnit;

public class KhachHang implements Comparable<KhachHang> {
    private String maKhachHang;
    private String tenKhachHang;
    private int soPhong;
    private long soNgayThue;
    private int tongTien;

    public KhachHang(String ma, String ten, int phong, String nhan, String tra, int tienDichVu) throws ParseException {
        // Chuan hoa ten
        String[] tmp = ten.trim().toLowerCase().split("\\s+");
        for (String s : tmp) {
            this.tenKhachHang += String.valueOf(s.charAt(0)).toUpperCase() + s.substring(1) + " ";
        }
        this.tenKhachHang = this.tenKhachHang.trim();

        // Nhap ma va so phong
        this.maKhachHang = ma;
        this.soPhong = phong;

        // Tinh so ngay thue
        Date ngayNhan = new SimpleDateFormat("dd/MM/yyyy").parse(nhan);
        Date ngayTra = new SimpleDateFormat("dd/MM/yyyy").parse(tra);
        long diff = ngayTra.getTime() - ngayNhan.getTime();
        this.soNgayThue = TimeUnit.DAYS.convert(diff, TimeUnit.MILLISECONDS) + 1;

        // Tinh so tien phai tra
        int tang = phong % 100;
        int donGia;
        if (tang == 1) donGia = 25;
        else if (tang == 2) donGia = 34;
        else if (tang == 3) donGia = 50;
        else donGia = 80;
        this.tongTien = (int) (donGia * this.soNgayThue + tienDichVu);
    }

    public int compareTo(KhachHang a) {
        Integer tien1 = tongTien;
        Integer tien2 = a.tongTien;
        return tien1.compareTo(tien2);
    }

    public String toString() {
        return maKhachHang + " " + tenKhachHang + " " + soPhong + " " + soNgayThue + " " + tongTien;
    }
}
