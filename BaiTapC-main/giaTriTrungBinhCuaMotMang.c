#include <stdio.h>

int main() {
    int n, x;
    double tong = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);
        tong += (double) x;
    }
    printf("%.3lf", tong / n);
    return 0;
}