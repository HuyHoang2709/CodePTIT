#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n < 3) printf("1\n");
        else {
            long long f1 = 1;
            long long f2 = 1;
            long long fn;
            int dem = 3;
            while(dem <= n) {
                dem++;
                fn = f1 + f2;
                f1 = f2;
                f2 = fn;
            }
            printf("%lld\n", fn);
        }
    }
    return 0;
}