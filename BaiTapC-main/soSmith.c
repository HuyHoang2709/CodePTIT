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
    int n;
    scanf("%d", &n);

    // Tinh tong cac chu so
    int tong1 = tongChuSo(n);

    // Tinh tong cac chu so khi phan tich thanh thua so nguyen to
    int tong2 = 0;
    while(n % 2 == 0) {
        tong2 += 2;
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) {
            while(n % i == 0) {
                int tong3 = tongChuSo(i);
                tong2 += tong3;
                n /= i;
            }
        }
    }
    if(n > 2) tong2 += tongChuSo(n);

    // In ra ket qua
    if(tong1 == tong2) printf("YES");
    else printf("NO");
    return 0;
}