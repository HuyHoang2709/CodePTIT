#include <stdio.h>

int nTo(int n) {
    if(n <= 3) return n > 1;
    else {
        if(n % 2 == 0 || n % 3 == 0) return 0;
        else {
            for(int i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n % (i+2) == 0) return 0;
            }
        }
    }
    return 1;
}

int chuSo(int n) {
    int tong = 0;
    while(n > 0) {
        tong += (n % 10);
        n /= 10;
    }
    return tong % 5 == 0;
}

int main() {
    int n, dem = 0;
    scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        if(nTo(i) && chuSo(i)) {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n%d", dem);
    return 0;
}