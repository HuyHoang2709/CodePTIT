#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= i - 1; j++) {
            printf("~");
        }
        for(int k = b; k >= 1; k--) {
            printf("*");
        }
        printf("\n");
    }
}