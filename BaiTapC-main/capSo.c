#include <stdio.h>

int ucln(int a, int b) {
    while(a != b) {
        if(a < b) b = b - a;
        else a = a - b;
    }
    return a;
} 

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(ucln(a, b) == ucln(c, d)) printf("YES\n");
        else printf("NO\n");
    }
}