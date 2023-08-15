#include <stdio.h>

int fibo(int n) {
    if(n <= 2) {
        return n > 0;
    } else {    
        int f1 = 1;
        int f2 = 1;
        int fn = 0;
        while(fn < n) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        return fn == n;
    }
}

int main() {
    int n = 21;
//    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}
