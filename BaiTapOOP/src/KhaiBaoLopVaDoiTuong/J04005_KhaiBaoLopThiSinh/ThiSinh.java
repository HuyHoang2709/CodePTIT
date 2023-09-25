package KhaiBaoLopVaDoiTuong.J04005_KhaiBaoLopThiSinh;

public class ThiSinh {
    private String hoTen;
    private String ngaySinh;
    private double diem1, diem2, diem3;

    public ThiSinh(String ten, String birth, double d1, double d2, double d3) {
        this.hoTen = ten;
        this.ngaySinh = birth;
        this.diem1 = d1;
        this.diem2 = d2;
        this.diem3 = d3;
    }

    public String toString() {
        return this.hoTen + " " + this.ngaySinh + " " + String.format("%.1f", this.diem1 + this.diem2 + this.diem3);
    }
}
