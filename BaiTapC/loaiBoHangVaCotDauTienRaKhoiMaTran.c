#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int arr[a][b];
        for(int i = 0; i < a; i++) {
            for(int j = 0 ; j < b; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Test %d:\n", k);
        for(int i = 1; i < a; i++) {
            for(int j = 1 ; j < b; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}