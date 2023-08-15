#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int start = i;
        int tmp = n - 1;
        for(int j = 1; j <= i; j++) {
            printf("%d ", start);
            start += tmp;
            tmp--;
        }
        printf("\n");
    }
    return 0;
}