#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        int dau, cuoi;
        scanf("%d", &n);
        cuoi = n % 10;
        while(n / 10 != 0) {
            n = n / 10;
        }
        dau = n;
        if(dau == cuoi) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}