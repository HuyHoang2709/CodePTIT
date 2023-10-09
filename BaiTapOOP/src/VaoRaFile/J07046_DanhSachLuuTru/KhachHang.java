package VaoRaFile.J07046_DanhSachLuuTru;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.concurrent.TimeUnit;

public class KhachHang implements Comparable<KhachHang> {
    private String maKhachHang;
    private String tenKhachHang;
    private String maPhong;
    private Date ngayDen;
    private Date ngayDi;
    private long soNgayLuuTru;

    public KhachHang(String cusID, String ten, String roomID, String den, String di) throws ParseException {
        this.maKhachHang = cusID;
        this.tenKhachHang = ten;
        this.maPhong = roomID;

        this.ngayDen = new SimpleDateFormat("dd/MM/yyyy").parse(den);
        this.ngayDi = new SimpleDateFormat("dd/MM/yyyy").parse(di);
        long diff = this.ngayDi.getTime() - this.ngayDen.getTime();
        this.soNgayLuuTru = TimeUnit.DAYS.convert(diff, TimeUnit.MILLISECONDS);
    }

    public int compareTo(KhachHang a) {
        Long day1 = this.soNgayLuuTru;
        Long day2 = a.soNgayLuuTru;
        return day1.compareTo(day2);
    }

    public String toString() {
        return maKhachHang + " " + tenKhachHang + " " + maPhong + " " + soNgayLuuTru;
    }
}
