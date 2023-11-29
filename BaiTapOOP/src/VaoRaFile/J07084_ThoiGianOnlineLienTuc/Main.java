package VaoRaFile.J07084_ThoiGianOnlineLienTuc;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("ONLINE.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> a = new ArrayList<>();
        while (t-- > 0) {
            a.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(a);
        for (SinhVien i : a)
            System.out.println(i);
    }
}
