package VaoRaFile.J07014_HopVaGiaoCuaHaiFileVanBan;

import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeSet;

public class WordSet {
    private Scanner sc;
    private TreeSet<String> mySet;

    public WordSet(String inp) throws IOException {
        sc = new Scanner(new File(inp));
        mySet = new TreeSet<>();
        String s;
        while (sc.hasNextLine()) {
            s = sc.nextLine();
            s = s.toLowerCase();
            String[] arr = s.split("\\s+");
            mySet.addAll(Arrays.asList(arr));
        }
    }

    public TreeSet<String> getMySet() {
        return mySet;
    }

    public String union(WordSet wordSet) {
        StringBuilder res = new StringBuilder();
        TreeSet<String> set = new TreeSet<>(wordSet.getMySet());
        set.addAll(mySet);
        for (String i : set) {
            res.append(i).append(" ");
        }
        return res.toString();
    }

    public String intersection(WordSet wordSet) {
        StringBuilder res = new StringBuilder();
        TreeSet<String> set = wordSet.getMySet();
        for (String i : mySet) {
            if (set.contains(i)) {
                res.append(i).append(" ");
            }
        }
        return res.toString();
    }
}
