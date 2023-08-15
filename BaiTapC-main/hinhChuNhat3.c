#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = b;
    for(int i = 1; i <= a; i++) {
        if(i <= b) {
            for(int j = i; j >= 1; j--) {
                printf("%d", j);
            }
            if(i < b) {
                for(int k = 2; k <= count; k++) {
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