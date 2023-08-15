#include <stdio.h>

int fibo(int m) {
    int n = 0;
    while(m / 10 != 0) {
        n += m % 10;
        m /= 10;
    }
    n += m;
    if(n <= 2) {
        return n > 0;
    } else {
        int f1 = 1;
        int f2 = 1;
        int fn = 2;
        while(fn < n) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return fn == n;
    }
}

int nTo(int n) {
    if(n <= 3) {
        return n > 1;
    } else {
        if(n % 2 == 0 || n % 3 == 0) {
            return 0;
        } else {
            for(int i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n %(i+2) == 0) {
                    return 0;
                }
            }
        }
        return 1;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a, min = b;
    if(a < b) {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) {
        if(fibo(i) && nTo(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}