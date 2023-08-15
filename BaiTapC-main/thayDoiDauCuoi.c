#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int so[9] = {};
    int idx = 0;
    while(n / 10 != 0) {
        so[idx] = n % 10;
        n = n / 10;
        idx++;
    }
    if(so[0] != 0) printf("%d", so[0]);
    for(int i = idx-1; i > 0; i--) {
        printf("%d", so[i]);
    }
    printf("%d", n);
    return 0;
}