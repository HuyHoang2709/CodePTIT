#include <stdio.h>

int f[100005];

int main() {
    int n, dem = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n ; i++) {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }
    for(int i = 0; i <= 100000; i++) {
        if(f[i] > 1) dem++;
    }
    printf("%d\n", dem);
    for(int i = 0; i <= 100000; i++) {
        if(f[i] > 1) printf("%d ", i);
    }
    return 0;
}