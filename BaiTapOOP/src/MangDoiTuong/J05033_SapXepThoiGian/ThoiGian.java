package MangDoiTuong.J05033_SapXepThoiGian;

public class ThoiGian implements Comparable<ThoiGian> {
    private int h, m, s;

    public ThoiGian(int h, int m, int s) {
        this.h = h;
        this.m = m;
        this.s = s;
    }

    @Override
    public String toString() {
        return h + " " + m + " " + s;
    }

    @Override
    public int compareTo(ThoiGian o) {
        if (h != o.h) return h - o.h;
        if (m != o.m) return m - o.m;
        return s - o.s;
    }
}
