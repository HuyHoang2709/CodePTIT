#include <stdio.h>

int giaiThua(int n) {
    int tich = 1;
    for(int i = 1; i <= n; i++) {
        tich *= i;
    }
    return tich;
}

int soStrong(int n) {
    int tong = 0;
    int soSanh = n;
    int temp;
    while(n / 10 != 0) {
        temp = n % 10;
        tong += giaiThua(temp);
        n = n / 10;
    }
    tong += giaiThua(n);
    return tong == soSanh;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a, min = b;
    if(a < b) {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) {
        if(soStrong(i)) printf("%d ", i);
    }
    return 0;
}