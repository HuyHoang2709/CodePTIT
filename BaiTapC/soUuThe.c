#include <stdio.h>
#include <string.h>

int soUuThe(char a[])
{
    int length = strlen(a);
    int chan = 0;
    int le = 0;
    for(int i = 0; i < length; i++)
    {
        int temp = a[i] - '0';
        if(temp < 0 || temp > 9) return -1;
        else 
        {
            if(temp % 2 == 0) chan++;
            else le++;
        }
    }
    if((chan > le && length % 2 == 0) || (chan < le && length % 2 == 1)) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        char a[1005];
        gets(a);
        if(soUuThe(a) == 1) printf("YES\n");
        else if(soUuThe(a) == 0) printf("NO\n");
        else printf("INVALID\n");
    }
    return 0;
}