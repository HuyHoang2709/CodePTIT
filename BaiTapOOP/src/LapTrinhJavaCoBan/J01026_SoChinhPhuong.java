package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01026_SoChinhPhuong {
    public static boolean kiemTra(int n) {
        int tmp = (int) Math.sqrt(n);
        return tmp == Math.sqrt(n);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0 ) {
            int n = sc.nextInt();
            if(kiemTra(n)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
