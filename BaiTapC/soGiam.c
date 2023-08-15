#include <stdio.h>

int soGiam(int n) {
    int temp = 0;
    int cnt = 0;
    while(n % 10 == 0) {
        cnt++;
        n /= 10;
        if(cnt > 1) return 0;
    } 
    while(n >= 10) {
        if(n % 10 <= temp) return 0;
        else {
            temp = n % 10;
            n /= 10;
        }
    }
    return n > temp;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        int dem = 0;
        scanf("%d %d", &a, &b);
        for(int i = a; i <= b; i++) {
            if(soGiam(i)) {
                dem++;
            }
        }
        printf("%d\n", dem);
    }
    return 0;
}