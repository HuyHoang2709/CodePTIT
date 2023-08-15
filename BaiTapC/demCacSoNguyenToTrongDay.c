#include <stdio.h>
#include <math.h>

int nto(int n) {
    if(n <= 2) return n == 2;
    else {
        if(n % 2 == 0) return 0;
        else {
            int sqr = sqrt(n);
            for(int i = 3; i <= sqr; i += 2) {
                if(n % i == 0) return 0;
            }
        }
    }
    return 1;
}

int f[100005];

int main() {
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++) {
        int n, idx = 0;
        scanf("%d", &n);
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            f[a[i]]++;
        }
        printf("Test %d:\n", k);
        for(int i = 0; i <= 100000; i++) {
            if(f[i] > 0 && nto(i)) {
                printf("%d xuat hien %d lan\n", i, f[i]);
            }
            f[i] = 0;
        }
    }
    return 0;
}