#include <stdio.h>

int main()
{
    int length, range, active;
    scanf("%d %d %d", &length, &active, &range);

    int road[1024] = {};
    while(active--)
    {
        int tmp;
        scanf("%d", &tmp);
        tmp--;
        road[tmp] = 1;
    }

    int newRoad[1024] = {};
    newRoad[length] = 1;

    for(int i = 0; i <= length; i++)
    {
        if(road[i] == 1)
        {
            for(int j = i-range; j <= i+range; j++)
            {
                if(j >= 0 && j <= length)
                {
                    newRoad[j] = 1;
                }
            }
        }
    }

    int temp = 0;
    int result = 0;
    for(int i = 0; i <= length; i++)
    {
        if(newRoad[i] == 0) temp++;
        else
        {
            if(temp % (2*range+1) == 0)
            {
                result = result + temp/(2*range+1);
            }
            else
            {
                result = result + temp/(2*range+1) + 1;
            }
            temp = 0;
        }
    }

    printf("%d", result);
    return 0;
}