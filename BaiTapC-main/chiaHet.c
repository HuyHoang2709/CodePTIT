#include <stdio.h>

int main()
{
    int n, k;
    int dem = 0;
    int check = 0;
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        while(temp % 2 == 0)
        {
            dem++;
            if(dem == k)
            {
                check = 1;
                break;
            }
            temp /= 2;
        }
    }
    if(check) printf("Yes");
    else printf("No");
    return 0;
}