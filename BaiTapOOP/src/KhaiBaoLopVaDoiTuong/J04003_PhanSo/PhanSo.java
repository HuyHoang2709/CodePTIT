package KhaiBaoLopVaDoiTuong.J04003_PhanSo;

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

    private long uocSoChung(long a, long b) {
        while (b > 0) {
            long tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }
}
