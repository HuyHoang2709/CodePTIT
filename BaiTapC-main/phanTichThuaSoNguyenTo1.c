#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        while(n % 2 == 0) {
            printf("2 ");
            n = n / 2;
        }
        for(int i = 3; i < n; i++) {
            while (n % i == 0) {
                printf("%d ", i);
                n = n / i;
            }
        }
        if(n != 1) {
            printf("%d\n", n);
        } else {
            printf("\n");
        }
    }
    return 0;
}