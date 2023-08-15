#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int dem = 97;
    for(int i = 1; i <= n; i++) {
        int a;
        if(i % 2 != 0) {
            a = dem;
            for(int j = 1; j <= i; j++) {
                printf("%c ", a);
                a++;
            }
            dem = a;
        } else {
            for(int j = i; j >= 1; j--) {
                dem++;
            }
            a = dem-1;
            for(int j = 1; j <= i; j++) {
                printf("%c ", a);
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}