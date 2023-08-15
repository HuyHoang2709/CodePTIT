#include <stdio.h>

int tongChuSo(int n) {
    int tong = 0;
    while(n / 10 != 0) {
        tong += n % 10;
        n /= 10;
    }
    tong += n;
    return tong;
}

int main() {
    int a, b; 
    scanf("%d %d", &a, &b);
    if(tongChuSo(a) <= tongChuSo(b)) printf("%d %d", a, b);
    else printf("%d %d", b, a);
}