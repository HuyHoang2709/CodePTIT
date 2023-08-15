#include <stdio.h>

int nTo(int n) {
    if(n <= 3) {
        return n > 1;
    } else {
        if(n % 2 == 0 || n % 3 == 0) {
            return 0;
        } else {
            for(int i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n % (i+2) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int thuanNghich(int n) {
    int m = n;
    int dao = 0;
    while(m > 0) {
        dao = dao * 10 + m % 10;
        m /= 10;
    }
    return dao == n;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int dem = 0;
        for(int i = a; i <= b; i++) {
            if(nTo(i) == 1 && thuanNghich(i) == 1) {
                dem++;
                printf("%d ", i);
                if(dem % 10 == 0) printf("\n");
            }
        }
        if(dem % 10 != 0) printf("\n");
    }
    return 0;
}