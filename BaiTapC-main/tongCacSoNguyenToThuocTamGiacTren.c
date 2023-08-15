#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if(n <= 3) return n > 1;
    else 
    {
        if(n % 2 == 0 || n % 3 == 0) return 0;
        else
        {
            int sqr = sqrt(n);
            for(int i = 5; i <= sqr; i += 6)
            {
                if(n % i == 0 || n % (i+2) == 0) return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(j >= i && isPrime(a[i][j]) == 1) sum += a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}