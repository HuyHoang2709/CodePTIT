#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
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
        if(kiemTra) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}