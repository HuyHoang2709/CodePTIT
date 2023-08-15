#include <stdio.h>

long long UCLN(int a, int b) {
    while(a != b) {
        if(a < b) {
            b = b - a;
        } else {
            a = a - b;
        }
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    long long tich = 1LL * a * b;
    long long ucln = UCLN(a, b);
    long long bcnn = tich / ucln;
    printf("%lld\n%lld", ucln, bcnn);
}