package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01002_TinhTongNSoNguyenDuongDauTien {

    public static void main(String[] args) {
        Scanner getInput = new Scanner(System.in);
        int n = getInput.nextInt();
        for (int i = 1; i <= n; i++) {
            int x = getInput.nextInt();
            long sum = (long) x * (x + 1) / 2;
            System.out.println(sum);
        }
    }
}
