package VaoRaFile.J07050_SapXepMatHang;

public class MatHang implements Comparable<MatHang> {
    private String maHang;
    private String tenHang;
    private String nhomHang;
    private double loiNhuan;

    public MatHang(String ma, String ten, String nhom, double mua, double ban) {
        this.maHang = ma;
        this.tenHang = ten;
        this.nhomHang = nhom;
        this.loiNhuan = ban - mua;
    }

    public int compareTo(MatHang a) {
        Double p1 = loiNhuan;
        Double p2 = a.loiNhuan;
        return p1.compareTo(p2);
    }

    public String toString() {
        return maHang + " " + tenHang + " " + nhomHang + " " + String.format("%.2f", loiNhuan);
    }
}
