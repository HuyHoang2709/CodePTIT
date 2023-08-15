#include <stdio.h>
#include <math.h>

int soDep(long long n) {
    long long m = n;
    long long nghich = 0;
    long long tong = 0;
    while(n > 0) {
        tong += (n % 10);
        nghich = nghich * 10 + n % 10;
        n /= 10;
    }
    return tong % 10 == 0 && nghich == m;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, dem = 0;
        scanf("%d", &n);
        long long start = pow(10, n-1);
        long long end = pow(10, n);
        for(long long i = start; i < end; i++) {
            if(soDep(i)) {
                dem++;
            }
        }
        printf("%d\n", dem);
    }
}