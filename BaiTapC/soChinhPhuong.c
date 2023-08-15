#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        int sqr;
        scanf("%d", &n);
        sqr = (int) sqrt(n);
        if(sqr == sqrt(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}