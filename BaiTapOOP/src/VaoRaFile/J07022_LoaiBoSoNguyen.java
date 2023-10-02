package VaoRaFile;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07022_LoaiBoSoNguyen {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        ArrayList<String> arr = new ArrayList<>();
        while (sc.hasNext()) {
            String tmp = sc.next();
            try {
                int x = Integer.parseInt(tmp);
            } catch (NumberFormatException e) {
                arr.add(tmp);
            }
        }
        Collections.sort(arr);
        for (String i : arr) {
            System.out.print(i + " ");
        }
    }
}
