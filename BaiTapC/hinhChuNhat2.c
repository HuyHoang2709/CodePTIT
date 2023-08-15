#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = b - 1;
    for(int i = 1; i <= a; i++) {
        if(i <= b) {
            for(int j = i; j <= b; j++) {
                printf("%d", j);
            }
            if(i != 1) {
                for(int k = b-1; k >= count; k--) {
                    printf("%d", k);
                }
                count--;
            }
        } else {
            for(int j = i; j > i - b; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}