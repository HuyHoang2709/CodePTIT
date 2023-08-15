#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);
    int max = 65 + (h-1)*2;
    for(int i = 1; i <= h; i++) {
        int c = 63 + 2*i;
        while(c <= max) {
            printf("%c", c);
            c += 2;
        }
        printf("\n");
    }
    return 0;
}