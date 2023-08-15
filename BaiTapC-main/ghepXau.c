#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        char nhap[10];
        char ds[n][10];
        int idx = 0;

        while(idx < n)
        {
            scanf("%s", &nhap);
            strcpy(ds[idx], nhap);
            idx++;
        }

        for(int i = 0; i < idx-1; i++)
        {
            for(int j = 0; j < idx-i-1; j++)
            {
                if(strcmp(ds[j], ds[j+1]) > 0)
                {
                    char temp[15];
                    strcpy(temp, ds[j]);
                    strcpy(ds[j], ds[j+1]);
                    strcpy(ds[j+1], temp);
                }
            }
        }

        for(int i = 0; i < idx; i++)
        {
            printf("%s", ds[i]);
        }
        
        printf("\n");
    }
    return 0;
}