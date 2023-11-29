package KhaiBaoLopVaDoiTuong.J04009_DienTichTamGiac;

public class Point {
    private double x, y;

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public double getDist(Point A) {
        return Math.sqrt((this.x - A.x) * (this.x - A.x) + (this.y - A.y) * (this.y - A.y));
    }
}
