#include <stdio.h>

int main()
{
    int n;
    int up, down;
    int totalTime;
    int sum1, sum2;
    int min1, min2;
    sum1 = sum2 = 0;
    min1 = min2 = 50000;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &up, &down);
        
        if(min1 > up) min1 = up;
        if(min2 > down) min2 = down;

        sum1 += up;
        sum2 += down;
    }

    if(sum1 > sum2) totalTime = sum1 + min2;
    else totalTime = sum2 + min1;
    
    printf("%d", totalTime);
    
    return 0;
}