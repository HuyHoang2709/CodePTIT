#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min;
    min = (a >= b) ? b : a;
    min = (min >= c) ? c : min;
    printf("%d", min);
    return 0;
}