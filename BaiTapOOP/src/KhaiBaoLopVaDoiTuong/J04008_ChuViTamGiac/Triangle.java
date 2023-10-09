package KhaiBaoLopVaDoiTuong.J04008_ChuViTamGiac;

public class Triangle {
    private Point A = new Point();
    private Point B = new Point();
    private Point C = new Point();
    private double AB;
    private double BC;
    private double CA;

    public Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
        this.A = new Point(x1, y1);
        this.B = new Point(x2, y2);
        this.C = new Point(x3, y3);
        AB = A.distance(B);
        BC = B.distance(C);
        CA = C.distance(A);
    }

    public String findPerimeter() {
        if (AB + BC <= CA || BC + CA <= AB || CA + AB <= BC) {
            return "INVALID";
        }
        return String.format("%.3f", AB + BC + CA);
    }
}
