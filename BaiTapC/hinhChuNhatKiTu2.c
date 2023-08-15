#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 65;
    for(int i = 1; i <= a; i++) {
        if(i <= b) {
            int dem = 1;    
            for(int j = 64 + i; j <= 64+b; j++) {
                if(dem > b) break;
                printf("%c", j);
                dem++;
            }
            if(i != 1) {
                if(dem <= b) {
                    for(int k = count; k >= 65; k--) {
                        if(dem > b) break;
                        printf("%c", k);
                        dem++;
                    }
                    count++;
                }
            }
        } else {
            int dem = 1;
            for(int j = 64 + b; dem <= b; j--) {
                printf("%c", j);
                dem++;
            }
        }
        printf("\n");
    }
    return 0;
}