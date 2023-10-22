package VaoRaFile.J07048_DanhSachSanPham_2;

public class SanPham implements Comparable<SanPham> {
    private String maSanPham;
    private String tenSanPham;
    private int giaBan;
    private int thoiHanBaoHanh;

    public SanPham(String ma, String ten, int gia, int baoHanh) {
        this.maSanPham = ma;
        this.tenSanPham = ten;
        this.giaBan = gia;
        this.thoiHanBaoHanh = baoHanh;
    }

    public int compareTo(SanPham a) {
        if (giaBan != a.giaBan) {
            Integer gia1 = giaBan;
            Integer gia2 = a.giaBan;
            return gia2.compareTo(gia1);
        }
        return maSanPham.compareTo(a.maSanPham);
    }

    public String toString() {
        return maSanPham + " " + tenSanPham + " " + giaBan + " " + thoiHanBaoHanh;
    }
}
