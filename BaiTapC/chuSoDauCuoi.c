#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int dau, cuoi;
    cuoi = n % 10;
    while(n / 10 != 0) {
        n = n / 10;
    }
    dau = n;
    printf("%d %d", dau, cuoi);
    return 0;
}