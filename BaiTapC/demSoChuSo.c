#include <stdio.h>

int main() {
    int n;
    int dem = 1;
    scanf("%d", &n);
    while(n / 10 != 0) {
        dem++;
        n = n / 10;
    }
    printf("%d", dem);
    return 0;
}