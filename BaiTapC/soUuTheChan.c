#include <stdio.h>

int soUuTheChan(long long n) {
    if(n % 2 != 0) return 0;
    else {
        int chan = 0;
        int le = 0;
        int temp;
        while(n > 0) {
            temp = n % 10;
            n /= 10;
            if(temp % 2 == 0) chan++;
            else le++;
        }
        return chan > le;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(soUuTheChan(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}