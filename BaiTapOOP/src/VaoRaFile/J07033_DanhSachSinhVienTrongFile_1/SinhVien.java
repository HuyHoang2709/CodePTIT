package VaoRaFile.J07033_DanhSachSinhVienTrongFile_1;

public class SinhVien implements Comparable<SinhVien> {
    private String maSinhVien;
    private String hoTen;
    private String lop;
    private String email;

    public SinhVien(String ma, String ten, String lop, String mail) {
        this.maSinhVien = ma.trim();
        this.lop = lop.trim();
        this.email = mail.trim();
        this.hoTen = "";
        ten = ten.trim().toLowerCase();
        String[] s = ten.split("\\s+");
        for (String i : s) {
            this.hoTen += String.valueOf(i.charAt(0)).toUpperCase() + i.substring(1) + " ";
        }
        this.hoTen = this.hoTen.trim();
    }

    @Override
    public int compareTo(SinhVien a) {
        return this.maSinhVien.compareTo(a.maSinhVien);
    }

    @Override
    public String toString() {
        return this.maSinhVien + " " + this.hoTen + " " + this.lop + " " + this.email;
    }
}
