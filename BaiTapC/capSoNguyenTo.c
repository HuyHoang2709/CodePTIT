#include <stdio.h>

int nTo(int n) {
    if(n <= 3) return n > 1;
    else {
        if(n % 2 == 0 || n % 3 == 0) return 0;
        else {
            for(int i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n % (i+2) == 0) return 0;
            }
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n % 2 == 0) {
            for(int i = 3; i <= n; i += 2) {
                if(nTo(i)) {
                    for(int j = i; j <= n; j += 2) {
                        if(nTo(j) && i + j == n) printf("%d %d ", i, j);
                    }
                }
            }
        } else {
            if(nTo(n-2)) printf("2 %d ", n-2);
        }
        printf("\n");
    }
    return 0;
} 