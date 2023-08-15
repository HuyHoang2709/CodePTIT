#include <stdio.h>
#include <math.h>

int soHoanHao(int n) {
    int tong = 1;
    int sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++) {
        if(n % i == 0) {
            if(i * i != n) {
                tong = tong + i + n/i;
            } else {
                tong = tong + i;
            }
        }
    }
    return (tong == n && n != 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a, min = b;
    if(a < b) {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) {
        if(soHoanHao(i)) printf("%d ", i);
    }
}