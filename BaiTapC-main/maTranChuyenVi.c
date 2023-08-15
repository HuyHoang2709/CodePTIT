#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0 ; j< b; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < b; i++) {
        for(int j = 0 ; j< a; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}