#include <stdio.h>
#include <string.h>

int thuanNghich(char *str) // Quan trong doan truyen tham so
{
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        if(str[i] != str[length-1-i]) return 0;
    }
    return 1;
}

int main()
{
    char f[5000][50];
    char temp[100];
    int index = 0;
    
    while(scanf("%s", &temp) != -1)
    {
        if(thuanNghich(temp))
        {
            strcpy(f[index], temp);
            index++;
        }
    }

    int max = 0;
    for(int i = 0; i < index; i++)
    {
        if(max < strlen(f[i]))
        {
            max = strlen(f[i]);
        }
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
                printf("%s %d\n", f[i], count);
            }
        }
    }

    return 0;
}