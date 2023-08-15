#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n ; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n ; i++) {
            int kt = 1;
            for(int j = i + 1; j < n; j++) {
                if(a[i] <= a[j]) {
                    kt = 0;
                    break;
                }
            }
            if(kt) printf("%d ", a[i]);
        }
        printf("\n");
    } 
    return 0;
}