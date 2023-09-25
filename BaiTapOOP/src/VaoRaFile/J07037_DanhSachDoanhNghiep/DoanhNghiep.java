package VaoRaFile.J07037_DanhSachDoanhNghiep;

public class DoanhNghiep implements Comparable<DoanhNghiep> {
    private String maDoanhNghiep;
    private String tenDoanhNghiep;
    private int soSinhVienNhan;

    public DoanhNghiep(String ma, String ten, int svNhan) {
        this.maDoanhNghiep = ma;
        this.tenDoanhNghiep = ten;
        this.soSinhVienNhan = svNhan;
    }

    public String toString() {
        return this.maDoanhNghiep + " " + this.tenDoanhNghiep + " " + this.soSinhVienNhan;
    }

    @Override
    public int compareTo(DoanhNghiep a) {
        return this.maDoanhNghiep.compareTo(a.maDoanhNghiep);
    }
}
