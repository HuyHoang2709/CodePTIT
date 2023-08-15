#include <stdio.h>
#include <math.h>

int nt(long long n)
{
    if(n <= 3) return n > 1;
    else 
    {
        if(n % 2 == 0 || n % 3 == 0) return 0;
        else 
        {
            long long sqr = (long long) sqrt(n);
            for(long long j = 5; j <= sqr; j += 6)
            {
                if(n % j == 0 || n % (j+2) == 0) return 0;
            }
        }
    }   
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long l, r;
        int dem = 0;
        scanf("%lld %lld", &l, &r);
        long long sqrL, sqrR;
        sqrL = sqrt(l);
        sqrR = sqrt(r);
        for(long long i = sqrL; i <= sqrR; i++)
        {
            if(nt(i)) dem++;
        }
        printf("%d\n", dem);
    }
    return 0;
}