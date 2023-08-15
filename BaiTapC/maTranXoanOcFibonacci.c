#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1;
    int f1 = 0, f2 = 0, fn = 0;
    while(r1 <= r2 && c1 <= c2) {
        for(int i = c1; i <= c2; i++) {
            a[r1][i] = fn;
            if(fn == 0) {
                fn = 1;
                f1 = 0;
                f2 = 1;
            } else if(fn == 1) {
                if(f1 == 0) {
                    f1 = 1;
                    f2 = 1;
                } else {
                    fn = 2;
                    f1 = 1;
                    f2 = fn;
                }
            }
            else {
                fn = f1 + f2;
                f1 = f2;
                f2 = fn;
            }
        }
        r1++;
        for(int i = r1; i <= r2; i++) {
            a[i][c2] = fn;
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        c2--;
        if(c1 <= c2 ) {
            for(int i = c2; i >= c1; i--) {
                a[r2][i] = fn;
                fn = f1 + f2;
                f1 = f2;
                f2 = fn;
            }
            r2--;
        }
        if(r1 <= r2 ) {
            for(int i = r2; i >= r1; i--) {
                a[i][c1] = fn;
                fn = f1 + f2;
                f1 = f2;
                f2 = fn;
            }
            c1++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
