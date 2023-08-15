#include <stdio.h>

int chiaHet(int n) {
    return n % 10 == 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int tong = 0;
        while(n / 10 != 0) {
            tong += n % 10;
            n /= 10;
        }
        tong += n;
        if(chiaHet(tong)) printf("YES\n");
        else printf("NO\n");
    }
}