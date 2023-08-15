#include <stdio.h>

void pTichThuaSoNguyenTo(int n) {
    printf("%d = ", n);
    int dem = 0;
    while(n % 2 == 0) {
        dem++;
        n /= 2;
    }
    if(dem) {
        if(n == 1) printf("2^%d", dem);
        else printf("2^%d * ", dem);
    }
    for(int i = 3; i * i <= n; i += 2) {
        dem = 0;
        if(n % i == 0) {
            while(n % i == 0) {
                dem++;
                n /= i;
            }
            if(n == 1) {
                printf("%d^%d", i, dem);
            } else {
                printf("%d^%d * ", i, dem);
            }
        }
    }
    if(n > 2) printf("%d^1", n);
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        pTichThuaSoNguyenTo(n);
    }
    return 0;
}