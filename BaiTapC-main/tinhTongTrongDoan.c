#include <stdio.h>

int main() {
    int a, b;
    long long tong = 0;
    scanf("%d %d", &a, &b);
    if(a == b) {
        tong = 1LL * a * 2;
    } else {
        
        int soBe, soLon;
        if(a < b) {
            soBe = a;
            soLon = b;
        } else {
            soBe = b;
            soLon = a;
        }
        for(int i = soBe; i <= soLon; i++) {
            tong += 1LL * i;
        }
    }
    printf("%lld", tong);
    return 0;
}