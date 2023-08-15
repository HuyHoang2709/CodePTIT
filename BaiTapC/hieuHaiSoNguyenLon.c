#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void reverse(int a[], int n) 
{
    int l = 0, r = n-1;
    while(l < r)
    {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l;
        --r;
    }
}

void subtract(char a[], char b[])
{
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int s1[n1], s2[n1], hieu[n1+1];
    for(int i = 0; i < n1; i++) s1[i] = a[i] - '0';
    for(int i = 0; i < n2; i++) s2[i] = b[i] - '0';
    reverse(s1, n1);
    reverse(s2, n2);
    for(int i = n2; i < n1; i++)
    {
        s2[i] = 0;
    }
    int nho = 0;
    for(int i = 0; i < n1; i++)
    {
        if(s1[i] < s2[i]+nho)
        {
            hieu[n++] = 10 + s1[i] - (s2[i]+nho);
            nho = 1;
        }
        else
        {
            hieu[n++] = s1[i] - (s2[i]+nho);
            nho = 0;
        }
    }
    for(int i = n-1-nho; i >= 0; i--)
    {
        if(i == n-1-nho) 
        {
            if(hieu[i] != 0)
            {
                printf("%d", hieu[i]);
            }
        }
        else printf("%d", hieu[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char a[1005];
        char b[1005];
        gets(a);
        gets(b);
        if(strlen(a) > strlen(b)) subtract(a, b);
        else if(strlen(a) < strlen(b)) subtract(b, a);
        else
        {
            int check = 1;
            int lengA = strlen(a);
            for(int i = 0; i < lengA; i++)
            {
                if(a[i]-'0' < b[i]-'0') 
                {
                    check = 0;
                    break;
                }
            }
            if(check) subtract(a, b);
            else subtract(b, a);
        }
    }
    return 0;
}