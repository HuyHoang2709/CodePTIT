package MangDoiTuong.J05081_DanhSachMatHang;

public class MatHang implements Comparable<MatHang> {
    private String maMatHang;
    private String tenMatHang;
    private String donViTinh;
    private int giaMua;
    private int giaBan;
    private int loiNhuan;

    public MatHang(String ma, String ten, String donVi, int mua, int ban) {
        this.maMatHang = ma;
        this.tenMatHang = ten;
        this.donViTinh = donVi;
        this.giaMua = mua;
        this.giaBan = ban;
        this.loiNhuan = ban - mua;
    }

    public String toString() {
        return this.maMatHang + " " + this.tenMatHang + " " + this.donViTinh + " " + this.giaMua + " " + this.giaBan + " " + this.loiNhuan;
    }

    @Override
    public int compareTo(MatHang a) {
        if (this.loiNhuan != a.loiNhuan) return a.loiNhuan - this.loiNhuan;
        return this.maMatHang.compareTo(a.maMatHang);
    }
}
