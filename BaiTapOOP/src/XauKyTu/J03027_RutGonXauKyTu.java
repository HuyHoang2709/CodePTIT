package XauKyTu;

import java.util.Scanner;
import java.util.Stack;

public class J03027_RutGonXauKyTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Stack<Character> st = new Stack<>();
        st.push(s.charAt(0));
        for (int i = 1; i < s.length(); i++) {
            if (!st.isEmpty()) {
                char x = st.peek();
                if (x == s.charAt(i)) st.pop();
                else st.push(s.charAt(i));
            } else st.push(s.charAt(i));
        }
        if (st.isEmpty()) System.out.println("Empty String");
        else {
            for (Character i : st) System.out.print(i);
        }
    }
}
