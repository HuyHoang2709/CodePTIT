#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int kt = 1;
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n / 2; i++) {
            if(a[i] != a[n-1-i]) kt = 0;
        }
        if(kt) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}