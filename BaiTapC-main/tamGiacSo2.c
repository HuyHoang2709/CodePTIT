#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int dem1 = 1, dem2;
        if(i % 2 == 0) dem2 = 2;
        else dem2 = 1;
        while(dem1 <= i) {
            printf("%d", dem2);
            dem2 += 2;
            dem1++;
        }
        printf("\n");
    }
    return 0;
}