#include <stdio.h>

long long chuSo(long long n) {
    long long tong = 0;
    long long temp;
    while(n / 10 != 0) {
        temp = n % 10;
        if(temp % 2 == 0) return 0;
        else {
            tong += temp;
            n /= 10;
        }
    }
    if(n % 2 == 0) return 0;
    else {
        tong += n;
    }
    return tong % 2 != 0;
}

long long thuanNghich(long long n) {
    long long dao = 0;
    long long m = n;
    while(m > 0) {
        dao = dao * 10 + m % 10;
        m /= 10;
    }
    return dao == n;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(chuSo(n) && thuanNghich(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}