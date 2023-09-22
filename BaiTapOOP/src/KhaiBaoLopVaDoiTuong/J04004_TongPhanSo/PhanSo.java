package KhaiBaoLopVaDoiTuong.J04004_TongPhanSo;

public class PhanSo {
    private long tu, mau;

    PhanSo(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
    }

    public String toString() {
        return tu + "/" + mau;
    }

    public void rutGon() {
        long x = uocSoChung(tu, mau);
        tu /= x;
        mau /= x;
    }

    private static long uocSoChung(long a, long b) {
        while (b > 0) {
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }

    public static PhanSo tongPhanSo(PhanSo a, PhanSo b) {
        long usc = uocSoChung(a.mau, b.mau);
        long mau = a.mau * b.mau / usc;
        long tu = mau / a.mau * a.tu + mau / b.mau * b.tu;
        PhanSo res = new PhanSo(tu, mau);
        res.rutGon();
        return res;
    }
}
