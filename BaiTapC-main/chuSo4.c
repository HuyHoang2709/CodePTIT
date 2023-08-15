#include <stdio.h>
#include <math.h>

int soMayMan(int n) {
    int dao = 0;
    int m = n;
    int tong = 0;
    while(m > 0) {
        if(m % 10 == 4) return 0;
        else {
            tong += m % 10;
            dao = dao * 10 + m % 10;
            m /= 10;
        }
    }
    return (tong % 10 == 0) && (dao == n);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int start = pow(10, n-1);
        int end = pow(10, n) - 1;
        for(int i = start; i <= end; i++) {
            if(soMayMan(i)) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}