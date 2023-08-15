#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count  = n-1;
    for(int i = 1; i <= n; i++) {
        int dem = 1;
        for(int j = count; j > 0; j--) {
            printf("~");
        }
        count--;
        for(int j = 1; j <= 2*i-1; j++) {
            printf("%d", dem);
            if(j < i) dem += 2;
            else dem -= 2;
        }
        printf("\n");
    }
    return 0;
}