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

void add(char a[], char b[])
{
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int s1[n1], s2[n1], sum[n1+1];
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
        int tmp = s1[i] + s2[i] + nho;
        sum[n++] = tmp % 10;
        nho = tmp / 10;
    }
    if(nho) sum[n++] = nho;
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d", sum[i]);
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
        char a[505];
        char b[505];
        gets(a);
        gets(b);
        if(strlen(a) >= strlen(b)) add(a, b);
        else add(b, a);
    }
    return 0;
}