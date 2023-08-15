#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--) {
        if(i != 1) {
            for(int j = i-1; j >= 1; j--) {
                printf("~");
            }
        }
        for(int k = n; k >= 1; k--) {
            printf("*");
        }
        printf("\n");
    }
}