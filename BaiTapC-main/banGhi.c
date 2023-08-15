#include <stdio.h>
#include <math.h>

struct tamGiac
{
    int a, b, c;
    double p;
    double S;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct tamGiac tg[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &tg[i].a, &tg[i].b, &tg[i].c);
        tg[i].p = (double) tg[i].a + tg[i].b + tg[i].c;
        tg[i].S = sqrt(tg[i].p * (tg[i].p-tg[i].a) * (tg[i].p-tg[i].b) * (tg[i].p-tg[i].c));
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(tg[j].S > tg[j+1].S)
            {
                struct tamGiac tmp = tg[j];
                tg[j] = tg[j+1];
                tg[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tg[i].a, tg[i].b, tg[i].c);
    }
    
    return 0;
}