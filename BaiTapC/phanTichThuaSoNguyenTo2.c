#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n % 2 == 0) {
        n /= 2;
        if(n > 1) printf("2x");
        else printf("2");
    }
    if(n > 2) {
        int sqr = sqrt(n);
        for(int i = 3; i <= sqr; i += 2) {
            if(n % i == 0) {
                while(n % i == 0) {
                    n /= i;
                    printf("%d", i);
                    if(n > 2) printf("x");
                }
            }
        }
        if(n > 2) printf("%d", n);
    }
    return 0;
}