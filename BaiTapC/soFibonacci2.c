#include <stdio.h>

int fibo(long long n) {
    if(n == 0 || n == 1) return 1;
    else {
        long long f1 = 1, f2 = 1, fn = 1;
        while(fn < n) {
            fn = f1 + f2;
            f1 = f2; 
            f2 = fn;
        }
        return fn == n;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(fibo(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}