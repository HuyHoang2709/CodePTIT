#include <stdio.h>

long long ucln(int a, int b) {
    while(a != b) {
        if(a < b) {
            b = b - a;
        } else {
            a = a - b;
        }
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i < b; i++) {
        for(int j = i+1; j <= b; j++) {
            if(ucln(i, j) == 1) {
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}