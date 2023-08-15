#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n ; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n ; i++) {
        int kt = 1;
        for(int j = 0; j < i; j++) {
            if(a[j] == a[i]) {
                kt = 0;
                break;
            }
        }
        if(kt) printf("%d ", a[i]);
    }
    return 0;
}