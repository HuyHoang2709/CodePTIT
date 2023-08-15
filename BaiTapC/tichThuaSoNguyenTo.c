#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        long long tich = 1;
        if(n % 2 == 0) {
            tich *= 2;
            while(n % 2 == 0) n /= 2;
        }
        if(n > 1) {
            int sqr = sqrt(n);
            for(int i = 3; i <= sqr; i += 2) {
                if(n % i == 0) {
                    tich *= (long long) i;
                    while(n % i == 0) n /= i;
                }
            }
            if(n > 2) tich *= (long long) n;
        }
        printf("%lld\n", tich);
    }
    return 0;
}