#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char a[53];
    int f[26] = {};
    gets(a);
    int length = strlen(a);
    int res = 0;
    for(int i = 0; i < length; ++i)
    {
        int temp = (int) a[i] - 65;
        f[temp]++;
        if(f[temp] == 2)
        {
            for(int j = 0; j < temp; j++)
            {
                if(f[j] < 2) res++;
            }
        }
    }
    printf("%d", res);
    return 0;
}