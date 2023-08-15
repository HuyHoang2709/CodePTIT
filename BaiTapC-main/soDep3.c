#include <stdio.h>

int soDep(int n) {
    int m = n, tong = 0, nghich = 0;
    int check = 0;
    while(m > 0) {
        if(m % 10 == 6) check = 1;
        tong += (m % 10);
        nghich = nghich * 10 + m % 10;
        m /= 10;
    }
    return nghich == n && check == 1 && tong % 10 == 8;
}

int main() {
    int a, b, dem = 0;
    scanf("%d %d", &a, &b);
    int max = a, min = b;
    if(a < b) {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) {
        if(soDep(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}