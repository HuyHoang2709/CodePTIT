package KhaiBaoLopVaDoiTuong.J04007_KhaiBaoLopNhanVien;

public class NhanVien {
    private String maNhanVien;
    private String hoTen;
    private String gioiTinh;
    private String ngaySinh;
    private String diaChi;
    private String maSoThue;
    private String ngayKyHopDong;

    public NhanVien(String ten, String gioiTinh, String ngaySinh, String diaChi, String maSoThue, String ngayKyHopDong) {
        this.maNhanVien = "00001";
        this.hoTen = ten;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.maSoThue = maSoThue;
        this.ngayKyHopDong = ngayKyHopDong;
    }

    public String toString() {
        return this.maNhanVien + " " + this.hoTen + " " + this.gioiTinh + " " + this.ngaySinh + " " + this.diaChi + " " + this.maSoThue + " " + this.ngayKyHopDong;
    }
}
