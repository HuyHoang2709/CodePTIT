package KhaiBaoLopVaDoiTuong.J04015_TinhThuNhapGiaoVien;

public class GiaoVien {
    private String maNgach;
    private String hoTen;
    private int bacLuong;
    private int phuCap;
    private long thuNhap;

    public GiaoVien(String maNgach, String hoTen, long luongCoBan) {
        this.maNgach = maNgach;
        this.hoTen = hoTen;
        String chucVu = maNgach.substring(0, 2);
        if (chucVu.equals("HT")) this.phuCap = 2000000;
        else if (chucVu.equals("HP")) this.phuCap = 900000;
        else this.phuCap = 500000;
        this.bacLuong = Integer.parseInt(maNgach.substring(2));
        this.thuNhap = luongCoBan * this.bacLuong + this.phuCap;
    }

    public String toString() {
        return this.maNgach + " " + this.hoTen + " " + this.bacLuong + " " + this.phuCap + " " + this.thuNhap;
    }
}
