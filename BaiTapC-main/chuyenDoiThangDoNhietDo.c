#include <stdio.h>

int main() {
    int c;
    double f;
    scanf("%d", &c);
    f = 1.8 * c + 32;
    printf("%.2lf", f);
    return 0;
}