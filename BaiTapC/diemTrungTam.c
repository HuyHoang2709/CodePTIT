#include <stdio.h>

int main() {
    int n, ktra = 1;
    scanf("%d", &n);
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &x2);
    y1 = x1; 
    y2 = x2;
    for(int i = 1; i <= n-2; i++) {
        scanf("%d %d", &x1, &x2);
        int kt = 0;
        if(x1 == y1 || x1 == y2 || x2 == y1 || x2 == y2) {
            y1 = x1;
            y2 = x2;
            kt = 1;
        }
        if(!kt) {
            ktra = 0;
            break;
        }
    }
    if(ktra) printf("Yes");
    else printf("No");
    return 0;
}