#include <stdio.h>

void inSoFibo(int n) {
    if(n <= 3) {
        if(n == 1) printf("0");
        if(n == 2) printf("0 1");
        if(n == 3) printf("0 1 1");
    } else {
        int f1 = 1;
        int f2 = 2;
        int fn = 2;
        int dem = 4;
        printf("0 1 1 ");
        while(dem <= n) {
            printf("%d ", fn);
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
            dem++;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    inSoFibo(n);
    return 0;
}