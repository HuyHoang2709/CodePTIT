package VaoRaFile;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;

public class J07029_SoNguyenToLonNhatTrongFile {
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
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> arr = (ArrayList<Integer>) in.readObject();
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (Integer i : arr) {
            if (notPrime[i] == 0) {
                if (!hm.containsKey(i)) hm.put(i, 1);
                else hm.put(i, hm.get(i) + 1);
            }
        }

        ArrayList<Integer> res = new ArrayList<>(hm.keySet());
        res.sort(Collections.reverseOrder());
        int dem = 0;
        for (Integer i : res) {
            if (dem < 10) {
                System.out.println(i + " " + hm.get(i));
                dem++;
            } else break;
        }
    }
}
