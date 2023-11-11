package MangDoiTuong.J05033_SapXepThoiGian;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<ThoiGian> a = new ArrayList<>();
        while (t-- > 0)
            a.add(new ThoiGian(sc.nextInt(), sc.nextInt(), sc.nextInt()));
        Collections.sort(a);
        for (ThoiGian i : a)
            System.out.println(i);
    }
}
