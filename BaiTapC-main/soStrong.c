#include <stdio.h>

int giaiThua(int n) {
    int tich = 1;
    for(int i = 1; i <= n; i++) {
        tich *= i;
    }
    return tich;
}

int main() {
    int n;
    scanf("%d", &n);
    int tong = 0;
    int soSanh = n;
    int temp;
    while(n / 10 != 0) {
        temp = n % 10;
        tong += giaiThua(temp);
        n = n / 10;
    }
    tong += giaiThua(n);
    printf("%d", tong == soSanh);
    return 0;
}