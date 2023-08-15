#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    for(int i = 0 ; i < m; i++) scanf("%d", &a[i]);
    for(int i = 0 ; i < n; i++) scanf("%d", &b[i]);
    int c;
    scanf("%d", &c);
    for(int i = 0; i < c; i++) printf("%d ", a[i]);
    for(int i = 0; i < n; i++) printf("%d ", b[i]);
    for(int i = c; i < m; i++) printf("%d ", a[i]);
    return 0;
}