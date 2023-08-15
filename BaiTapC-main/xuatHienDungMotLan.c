#include <stdio.h>

int f[100000];

int main() {
    int n, dem = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[a[i]]++;
    } 
    for(int i = 0; i < n; i++) {
        if(f[a[i]] == 1) {
            dem++;
        }
    }
    printf("%d\n", dem);
    for(int i = 0; i < n; i++) {
        if(f[a[i]] == 1) {
            printf("%d ", a[i]);
        }  
    }
    return 0;
}