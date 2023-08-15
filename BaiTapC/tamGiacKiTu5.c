#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);
    for(int i = h; i >= 1; i--) {
        int temp = i;
        int c = 63 + i;
        while(temp--) {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}