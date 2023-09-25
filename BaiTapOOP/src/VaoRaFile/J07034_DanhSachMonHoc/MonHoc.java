package VaoRaFile.J07034_DanhSachMonHoc;

public class MonHoc implements Comparable<MonHoc> {
    private String maMon;
    private String tenMon;
    private int soTinChi;

    public MonHoc(String ma, String ten, int tinChi) {
        this.maMon = ma;
        this.tenMon = ten;
        this.soTinChi = tinChi;
    }

    public String toString() {
        return this.maMon + " " + this.tenMon + " " + this.soTinChi;
    }

    @Override
    public int compareTo(MonHoc a) {
        return this.tenMon.compareTo(a.tenMon);
    }
}
