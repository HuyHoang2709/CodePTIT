#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, p;
        int dem = 0;
        scanf("%d %d",&n, &p);
        for(int i = 1; i <= n; i++)
        {
            int temp = i;
            while(temp % p == 0) 
            {
                dem++;
                temp /= p;
            }
        }
        printf("%d\n", dem);
    }
    return 0;
}