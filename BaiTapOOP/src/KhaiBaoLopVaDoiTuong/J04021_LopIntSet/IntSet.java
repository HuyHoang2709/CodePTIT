package KhaiBaoLopVaDoiTuong.J04021_LopIntSet;

import java.util.Set;
import java.util.TreeSet;

public class IntSet {
    private int[] arr;

    public IntSet(int[] arr) {
        this.arr = arr;
    }

    public IntSet union(IntSet A) {
        Set<Integer> mySet = new TreeSet<>();
        for (int i : arr) {
            mySet.add(i);
        }
        for (int i : A.arr) {
            mySet.add(i);
        }
        return new IntSet(mySet.stream().mapToInt(Integer::intValue).toArray());
    }

    @Override
    public String toString() {
        StringBuilder s = new StringBuilder();
        for (int i : arr)
            s.append(Integer.toString(i)).append(" ");
        return s.toString();
    }
}
