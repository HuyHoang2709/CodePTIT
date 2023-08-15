#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%0.15lf\n", (double)1 / n);
    }
    return 0;
}