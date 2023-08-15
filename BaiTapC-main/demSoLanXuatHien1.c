#include <stdio.h>

int f[100000];

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(f[a[i]] > 0) {
            printf("%d %d\n", a[i], f[a[i]]);
            f[a[i]] = 0;
        }
    }
    return 0;
}