#include <stdio.h>
#include <string.h>

int main()
{
    char str[1005];
    int f[205] = {};

    gets(str);
    int length = strlen(str);

    for(int i = 0; i < length; i++)
    {
        int tmp = (int) str[i];
        f[tmp]++;
    }

    int check = 1;
    int pos[8] = {34, 39, 40, 41, 91, 93, 123, 125};

    for(int i = 0; i < 8; i += 2)
    {
        if(i == 0) 
        {
            if(f[pos[i]] % 2 != 0)
            {
                check = 0;
                break;
            }
        }
        else
        {
            if(f[pos[i]] != f[pos[i+1]])
            {
                check = 0;
                break;
            }
        }
    }

    printf("%d", check);
    return 0;
}