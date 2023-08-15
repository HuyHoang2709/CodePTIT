#include <stdio.h>

int main() 
{
    int x[4];
    int y[4];
    int maxx, maxy;
    int minx, miny;
    int canh;

    maxx = maxy = 0;
    minx = miny = 101;

    for(int i = 0; i < 4; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for(int i = 0; i < 4-1; i++) 
    {
        for(int j = 0; j < 4-i-1; j++)
        {
            if(x[j] > x[j+1])
            {
                int tmp = x[j];
                x[j] = x[j+1];
                x[j+1] = tmp;
            }
            if(y[j] > y[j+1])
            {
                int tmp = y[j];
                y[j] = y[j+1];
                y[j+1] = tmp;
            }
        }
    }
    maxx = x[3];
    minx = x[0];
    maxy = y[3];
    miny = y[0];

    if(maxx - minx > maxy - miny) 
        canh = maxx - minx;
    else 
        canh = maxy - miny;
        
    printf("%d", canh * canh);
    return 0;
}