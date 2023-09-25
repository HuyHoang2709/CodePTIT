package VaoRaFile;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07021_ChuanHoaXauHoTenTrongFile {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        while (sc.hasNextLine()) {
            String ten = sc.nextLine().trim();
            if (!ten.equals("END")) {
                String[] part = ten.split("\\s+");
                for (String i : part) {
                    StringBuilder tmp = new StringBuilder(i.toLowerCase());
                    tmp.setCharAt(0, Character.toUpperCase(tmp.charAt(0)));
                    System.out.print(tmp + " ");
                }
                System.out.print("\n");
            }
        }
    }
}
