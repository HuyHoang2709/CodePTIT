#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int dem = 0;
    scanf("%d %d", &a, &b);
    int start = sqrt(a);
    int end = sqrt(b);
    start = (start * start == a) ? start : start + 1;
    dem = end - start;
    printf("%d\n", dem + 1);
    for(int i = start; i <= end; i++) {
        printf("%d\n", i*i);
    }
    return 0;
}