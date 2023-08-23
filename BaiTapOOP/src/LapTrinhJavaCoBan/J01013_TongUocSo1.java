package LapTrinhJavaCoBan;

import java.util.*;

public class J01013_TongUocSo1 {

    static int[] notPrime = new int[2000005];

    public static void sang() {
        notPrime[0] = notPrime[1] = 1;
        for (int i = 2; i <= 1415; ++i) {
            if (notPrime[i] == 0) {
                for (int j = i * i; j <= 2000000; j += i) {
                    if (notPrime[j] == 0) {
                        notPrime[j] = i;
                    }
                }
            }
        }
        for (int i = 2; i <= 2000000; ++i) {
            if (notPrime[i] == 0) {
                notPrime[i] = i;
            }
        }
    }

    public static void main(String[] args) {
        sang();
        
        Scanner sc = new Scanner(System.in);
        long sum = 0;
        int n = sc.nextInt(), x;
        while (n-- > 0) {
            x = sc.nextInt();
            while (x > 1) {
                sum += notPrime[x];
                x /= notPrime[x];
            }
        }
        System.out.println(sum);
    }
}
