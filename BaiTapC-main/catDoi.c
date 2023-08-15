#include <stdio.h>
#include <math.h>

void catDoi(long long n) {
    long long new = 0;
    long long temp;
    int cnt = 0;
    int ktra = 1;
    while(n > 0) {
        temp = n % 10;
        switch(temp) {
            case 0:
            case 8:
            case 9: {
                new += 0;
                break;
            }
            case 1: {
                new +=  (long long) pow(10, cnt);
                break;
            }
            default: {
                ktra = 0;
                break;
            }
        }
        if(ktra == 0) break;
        else {
            n /= 10;
            cnt++;
        }
    }
    if(ktra) {
        if(new == 0) printf("INVALID\n");
        else printf("%lld\n", new);
    }
    else printf("INVALID\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        catDoi(n);
    }
} 