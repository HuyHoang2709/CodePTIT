#include <stdio.h>

int soChanDacBiet(long long n) {
    if(n % 2 != 0) return 0;
    else {
        long long temp;
        while(n / 10 != 0) {
            temp = n % 10;
            if(temp % 2 != 0) return 0;
            n /= 10;
        }
        if(n % 2 != 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(soChanDacBiet(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}