#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a != 0) {
        printf("%.2lf", (double) -b / a);
    } else {
        if(b == 0) {
            printf("Vo so nghiem");
        } else {
            printf("Vo nghiem");
        }
    }
    return 0;
}