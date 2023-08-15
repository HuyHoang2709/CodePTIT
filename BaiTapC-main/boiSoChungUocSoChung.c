#include <stdio.h>

long long ucln(long long a, long long b) {
    while(a != b) {
        if(a < b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
    }
    return a;
}

long long bcnn(long long a, long long b) {
    long long tich = a * b;
    return tich / ucln(a, b);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", bcnn(a, b), ucln(a, b));
    }
    return 0;
}