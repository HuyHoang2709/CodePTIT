#include <stdio.h>
#include <math.h>

int soKhongGiam(int n) {
    int temp = 9;
    int kiemTra = 1;
    while(n / 10 != 0) {
        if(temp >= (n % 10)) {
            temp = n % 10;
            n = n / 10;
        } else {
            kiemTra = 0;
            break;
        }
    }
    if(kiemTra) {
        if(n > temp) {
            kiemTra = 0;
        }
    }
    return kiemTra;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int max = pow(10, n);
        int min = pow(10, n-1);
        for(int i = min; i < max; i++) {
            if(soKhongGiam(i)) printf("%d ", i);
        }
        printf("\n");
    }
}