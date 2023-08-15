#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("0 ");
        }
        int dem = 1;
        if(i < n-1) {
            for(int k = i+1; k < n; k++) {
                printf("%d ", dem);
                dem++;
            }
        }
        printf("\n");
    }
    return 0;
}