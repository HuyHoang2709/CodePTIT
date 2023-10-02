package VaoRaFile;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;

public class J07030_CapSoNguyenToTrongFile_1 {
    public static int[] notPrime = new int[1000005];

    public static void sang() {
        notPrime[0] = notPrime[1] = 1;
        int sqr = (int) Math.sqrt(1000000);
        for (int i = 2; i <= sqr; i++) {
            if (notPrime[i] == 0) {
                for (int j = i * i; j <= 1000000; j += i) notPrime[j] = 1;
            }
        }
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        sang();

        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a1 = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> a2 = (ArrayList<Integer>) in2.readObject();

        Collections.sort(a1);
        Collections.sort(a2);
        HashSet<Integer> hs = new HashSet<>();

        for (int n : a1) {
            if (!hs.contains(n)) {
                hs.add(n);
                int m = 1000000 - n;
                if (notPrime[n] == 0 && notPrime[m] == 0 && a2.contains(m) && n < m) {
                    System.out.println(n + " " + m);
                }
            }
        }
    }
}
