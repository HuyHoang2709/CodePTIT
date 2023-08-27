package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01025_HinhVuong {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int maxEdge = 0;
        int x[] = new int[4];
        int y[] = new int[4];
        for (int i = 0; i < 4; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
        }
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                maxEdge = Math.max(maxEdge, Math.abs(x[i] - x[j]));
                maxEdge = Math.max(maxEdge, Math.abs(y[i] - y[j]));
            }
        }
        System.out.println(maxEdge * maxEdge);
    }
}
