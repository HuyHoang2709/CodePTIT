#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &a[0]);
    int min = a[0], min2 = 99;
    for(int i = 1; i < n; i++) {
        scanf("%d", &a[i]);
        if(min > a[i]) {
            min2 = min;
            min = a[i];
        }
        else if(min2 > a[i] && min < a[i])
            min2 = a[i];
    }
    printf("%d %d", min, min2);
    return 0;
}