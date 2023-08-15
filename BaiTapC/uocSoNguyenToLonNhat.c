#include <stdio.h>

int nt(long long n) {
    if(n <= 3) return n > 1;
    else {
        if(n % 2 == 0 || n % 3 == 0) return 0;
        else {
            for(long long i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n % (i + 2) == 0) return 0;
            }
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        long long kt = 1;
        if(nt(n)) printf("%lld\n", n);
        else {
            while(n % 2 == 0) {
                if(nt(n/2)) {
                    printf("%d\n", n/2);
                    kt = 0;
                    break;
                }
                n /= 2;
            }
            if(kt) {
                long long i = 3;
                while(i <= n / i) {
                    int check = 0;
                    while(n % i == 0) {
                        if(nt(n / i)) {
                            printf("%lld\n", n / i);
                            check = 1;
                            break;
                        }
                        n /= i;
                    }
                    if(check) break;
                    i += 2;
                }
            }
        }
    }
    return 0;
}