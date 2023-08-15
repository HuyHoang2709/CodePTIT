#include <stdio.h>

int main() {
    int a, b; 
    scanf("%d %d", &a, &b);
    int max = 63 + b;
    for(int i = 1; i <= a; i++) {
        if(i <= b) {
            int dem = 1;
            for(int j = 63 + i; j <= max; j++) {
                if(dem > b) break;
                printf("%c", j);
                dem++;
            }
            if(i != 1) {
                while(dem <= b) {
                    printf("%c", max);
                    dem++;
                }
            }
        } else {
            int dem = 1;
            while(dem <= b) {
                printf("%c", max);
                dem++;
            }
        }
        printf("\n");
    }
    return 0;
}