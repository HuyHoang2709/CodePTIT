#include <stdio.h>

int main() {
    int n, dem = 1, i = 1;
    scanf("%d", &n);
    while(i <= n) {
        for(int i = 1; i <= dem; i++) {
            printf("%d", i);
        }
        dem += 2;
        i++;
        printf("\n");
    }
    return 0;
}