#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, dem = 1;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 1; i < n; i++) {
            int kt = 1;
            for(int j = 0; j < i; j++) {
                if(a[j] > a[i]) {
                    kt = 0;
                    break;
                }
            }
            if(kt) dem++;
        }
        printf("%d\n", dem);
    }
    return 0;
}