#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", i);
        int dem = 0;
        while(n % 2 == 0) {
            dem++;
            n = n / 2;
        }
        if(dem) {
            printf("2(%d) ", dem);
        }
        dem = 0;
        for(int j = 3; j <= sqrt(n); j += 2) {
            while(n % j == 0) {
                dem++;
                n = n / j;
            }
            if(dem) {
                printf("%d(%d) ", j, dem);
                dem = 0;
            }
        }
        if(n > 2) printf("%d(1)\n", n);
        else printf("\n");
    }
    return 0;
}