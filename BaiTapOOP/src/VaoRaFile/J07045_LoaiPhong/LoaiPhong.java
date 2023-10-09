package VaoRaFile.J07045_LoaiPhong;

public class LoaiPhong implements Comparable<LoaiPhong> {
    private char loaiPhong;
    private String tenLoaiPhong;
    private int donGiaNgay;
    private double phiPhucVu;

    public LoaiPhong(String s) {
        String[] token = s.split("\\s+");
        this.loaiPhong = token[0].charAt(0);
        this.tenLoaiPhong = token[1];
        this.donGiaNgay = Integer.parseInt(token[2]);
        this.phiPhucVu = Double.parseDouble(token[3]);
    }

    public int compareTo(LoaiPhong a) {
        return this.tenLoaiPhong.compareTo(a.tenLoaiPhong);
    }

    public String toString() {
        return loaiPhong + " " + tenLoaiPhong + " " + donGiaNgay + " " + phiPhucVu;
    }
}
