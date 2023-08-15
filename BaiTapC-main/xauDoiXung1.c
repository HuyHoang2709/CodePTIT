#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        int dem = 0;
        int check = 1;
        char a[25];
        gets(a);
        int length = strlen(a);
        for(int i = 0; i < length / 2; i++) 
        {
            if(a[i] != a[length - i - 1]) dem++;
        }
        if(length % 2 == 0) 
        {
            if(dem == 1) printf("YES\n");
            else printf("NO\n");
        }
        else 
        {
            if(dem <= 1) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}