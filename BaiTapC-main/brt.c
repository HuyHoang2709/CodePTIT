#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	int x = *(int*) a;
	int y = *(int*) b;
	return (x - y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int min = 2e9;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]); 
        }
        
        // Sort mang bang quick sort
        qsort(a, n, sizeof(int), cmp);
        
        // Tim kc ngan nhat
        for(int i = 0; i < n; i++)
        {
            if(i != 0)
            {
                int tmp = abs(a[i] - a[i-1]);
                if(tmp < min)
                {
                    min = tmp;
                    count = 1;
                }
                else if(tmp == min)
                {
                    count++;
                }
            }
        }
        printf("%d %d\n", min, count);
    }
    return 0;
}