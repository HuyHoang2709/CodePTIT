#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long tich = 1;
    while(n / 10 != 0) {
        tich *= (long long) (n % 10);
        n = n / 10;
    } 
    tich *= (long long) n;
    printf("%lld", tich);
    return 0;
}