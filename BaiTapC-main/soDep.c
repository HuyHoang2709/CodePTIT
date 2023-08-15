#include <stdio.h>
#include <math.h>

int soDep(long long n) {
    if(n < 10) return 1;
    else {
        long long m = 0;
        int cnt = 0;
        long long end = n % 10;
        long long dao = 0;
        long long start;
        n /= 10;
        while(n > 10) {
            dao = dao * 10 + n % 10;
            m += n % 10 * pow(10, cnt);
            cnt++;
            n /= 10;
        }
        start = n;
        return dao == m && (start * 2 == end || start == end * 2);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(soDep(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
} 