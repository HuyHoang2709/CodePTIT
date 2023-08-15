#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta, sqr;
    scanf("%d %d %d", &a, &b, &c);
    delta = (double) b * b - 4 * a * c;
    if(delta < 0) {
        printf("NO");
    } else if(delta == 0) {
        printf("%.2lf", (double) -b / (2*a));
    } else {
        sqr = sqrt(delta);
        printf("%.2lf %.2lf", (-b+sqr)/(2*a), (-b-sqr)/(2*a));
    }
    return 0;
}