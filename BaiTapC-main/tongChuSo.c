#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, tong = 0;
        scanf("%d", &n);
        while(n / 10 != 0) {
            tong = tong + n % 10;
            n = n / 10;
        }
        tong = tong + n;
        printf("%d\n", tong);
    }
    return 0;
}