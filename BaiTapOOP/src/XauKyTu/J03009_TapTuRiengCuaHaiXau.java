package XauKyTu;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class J03009_TapTuRiengCuaHaiXau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String a = sc.nextLine();
            String b = sc.nextLine();

            String[] A = a.split("\\s");
            ArrayList<String> B = new ArrayList<>(Arrays.asList(b.split("\\s")));
            ArrayList<String> res = new ArrayList<>();

            for (String i : A) {
                if (!B.contains(i) && !res.contains(i)) res.add(i);
            }
            Collections.sort(res);

            for (String i : res) {
                System.out.print(i + " ");
            }
            System.out.print("\n");
        }
    }
}
