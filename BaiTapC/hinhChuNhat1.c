#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 1;
    for(int i = 1; i <= a; i++) {
        if(i > b) {
            printf("%d", i);
        } else {
            for(int j = i; j <= b; j++) {
                printf("%d", j);
            }
        }
        if(i != 1) {
            for(int k = count; k >= 1; k--) {
                printf("%d", k);
            }
            if(count < b-1) count++;
        }
        printf("\n");
    }
    return 0;
}