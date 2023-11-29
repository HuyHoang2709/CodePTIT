package KhaiBaoLopVaDoiTuong.J04022_WordSet;

import java.util.*;

public class WordSet {
    private ArrayList<String> arr;

    public WordSet(String s) {
        s = s.toLowerCase();
        this.arr = new ArrayList<>();
        String[] a = s.split("\\s+");
        this.arr.addAll(Arrays.asList(a));
    }

    public WordSet(ArrayList<String> arr) {
        this.arr = arr;
    }

    public WordSet union(WordSet A) {
        Set<String> mySet = new TreeSet<>();
        mySet.addAll(arr);
        mySet.addAll(A.arr);
        return new WordSet(new ArrayList<String>(mySet));
    }

    public WordSet intersection(WordSet A) {
        Set<String> mySet = new TreeSet<>();
        for (String i : arr) {
            if (A.arr.contains(i)) {
                mySet.add(i);
            }
        }
        return new WordSet(new ArrayList<String>(mySet));
    }

    @Override
    public String toString() {
        StringBuilder res = new StringBuilder();
        for (String i : arr) {
            res.append(i).append(" ");
        }
        return res.toString();
    }
}
