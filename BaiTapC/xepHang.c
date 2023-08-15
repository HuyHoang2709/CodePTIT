#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int t[n], d[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &t[i], &d[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(t[j] > t[j+1])
            {
                int tmp1 = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp1;

                int tmp2 = d[j];
                d[j] = d[j+1];
                d[j+1] = tmp2;
            }
        }
    }
    int timeSum = 0;
    for(int i = 0; i < n; i++)
    {
        if(timeSum < t[i])
        {
            timeSum = t[i] + d[i];
        }
        else 
        {
            timeSum += d[i];
        }
    }
    printf("%d", timeSum);
    return 0;
}