#include <stdio.h>

int lcm(int a, int b)
{
    int tich = a * b;
    int temp;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return tich / a;
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

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("%d ", a[0]);
        for(int i = 0; i < n-1; i++)
        {
            printf("%d ", lcm(a[i], a[i+1]));
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}