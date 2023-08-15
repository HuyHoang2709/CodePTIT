#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a;
    if(max < b) max = b;
    int count2 = 2;
    for(int i = 1; i <= a; i++) {
        int count = 1;
        for(int j = max; j >= 1; j--) {
            if(count > b) break;
            printf("%d", j);
            count++;
        }
        max--;
        if(count <= b) {
            for(int k = 2; k <= count; k++) {
                if(count > b) break;
                printf("%d", k);
                count++;
                count2++;
            }
        }
        printf("\n");
    }
    return 0;
}