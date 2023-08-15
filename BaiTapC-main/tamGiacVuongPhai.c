#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--) {
        for(int j = i-1; j >= 1; j--) {
            printf("~");
        }
        for(int k = 1; k <= n-i+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}