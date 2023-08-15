#include <stdio.h>
#include <string.h>

int main()
{
    char f[5000][50];
    char temp[100];
    int index = 0;
    int max = 0;
    
    while(scanf("%s", &temp) != -1)
    {
        if(max < strlen(temp))
        {
            max = strlen(temp);
        }
        strcpy(f[index], temp);
        index++;
    }

    for(int i = 0; i < index; i++)
    {
        if(strlen(f[i]) == max)
        {
            int check = 1;
            for(int j = 0; j < i; j++)
            {
                if(strcmp(f[i], f[j]) == 0)
                {
                    check = 0;
                    break;
                }
            }

            if(check)
            {
                int count = 0;
                for(int j = 0; j < index; j++)
                {   
                    if(strcmp(f[i], f[j]) == 0)
                    {
                        count++;
                    }
                }
                printf("%s %d  %d\n", f[i], max, count);
            }
        }
    }

    return 0;
}