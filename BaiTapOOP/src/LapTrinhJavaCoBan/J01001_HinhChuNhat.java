package LapTrinhJavaCoBan;

import java.util.Scanner;

public class J01001_HinhChuNhat {

    public static void main(String[] args) {
        Scanner getInput = new Scanner(System.in);
        int CD = getInput.nextInt();
        int CR = getInput.nextInt();
        if (CD <= 0 || CR <= 0) {
            System.out.println(0);
        } else {
            int P = 2 * (CD + CR);
            int S = CD * CR;
            System.out.print(P + " ");
            System.out.print(S);
        }
    }
}
