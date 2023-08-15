#include <stdio.h>

int main()
{
    int n, a, b, mina = 1e6, minb = 1e6;
    scanf("%d", &n);
    while(n--) 
    {
        scanf("%d %d", &a, &b);
        if(mina > a) mina = a;
        if(minb > b) minb = b;
    }
    printf("%lld", (long long) mina * minb);
    return 0;
}