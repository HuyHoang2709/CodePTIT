package VaoRaFile;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07015_SoNguyenToTrongFileNhiPhan {
    static int[] notPrime = new int[10001];

    public static void sang() {
        notPrime[0] = notPrime[1] = 1;
        for (int i = 2; i <= 100; i++) {
            if (notPrime[i] == 0) {
                for (int j = i * i; j <= 10000; j += i) {
                    notPrime[j] = 1;
                }
            }
        }
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        sang();
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        ArrayList<Integer> ds = (ArrayList<Integer>) in.readObject();
        int[] a = new int[10001];
        for (Integer i : ds) {
            a[i]++;
        }
        for (int i = 0; i <= 10000; i++) {
            if (a[i] > 0 && notPrime[i] == 0) {
                System.out.println(i + " " + a[i]);
            }
        }
    }
}
