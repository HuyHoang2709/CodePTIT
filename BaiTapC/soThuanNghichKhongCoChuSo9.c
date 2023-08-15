#include <stdio.h>

int thuanNghich(int n) {
    int m = n;
    int nghich = 0;
    while(n > 0) {
        int a = n % 10;
        if(a == 9) return 0;
        else {
            nghich = nghich * 10 + a;
            n /= 10;
        }
    }
    return nghich == m;
}

int main() {
    int n, dem = 0;
    scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        if(thuanNghich(i)) {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n%d", dem);
    return 0;
}