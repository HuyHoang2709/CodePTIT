package VaoRaFile.J07037_DanhSachDoanhNghiep;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DN.in"));
        int n = Integer.parseInt((sc.nextLine()));
        ArrayList<DoanhNghiep> dn = new ArrayList<>();
        while (n-- > 0) {
            dn.add(new DoanhNghiep(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
        Collections.sort(dn);
        for(DoanhNghiep i : dn) {
            System.out.println(i);
        }
    }
}
