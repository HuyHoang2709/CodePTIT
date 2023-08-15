#include <stdio.h> 

int nTo(int n) {
    if(n <= 3) {
        return n > 1;
    } else {
        if(n % 2 == 0 || n % 3 == 0) return 0;
        else {
            for(int i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n % (i+2) == 0) return 0;
            }
        }
    }
    return 1;
}

int chuSo(int n) {
    int temp;
    while(n / 10 != 0) {
        temp = n % 10;
        if(nTo(temp) == 0) return 0;
        n /= 10;
    }
    if(nTo(n) == 0) 
        return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, dem = 0;;
        scanf("%d %d", &a, &b);
        for(int i = a; i <= b; i++) {
            if(nTo(i) && chuSo(i)) dem++;
        }
        printf("%d\n", dem);
    }
}