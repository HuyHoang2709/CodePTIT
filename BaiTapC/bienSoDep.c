#include <stdio.h>
#include <string.h>

int tangChat(char a[])
{
    for(int i = 0; i < 4; i++)
    {
        int b, c;
        c = a[i+1] - '0';
        b = a[i] - '0';
        if(c - b != 1) return 0;
    }
    return 1;
}

int bangNhau(char a[])
{
    int temp = a[0];
    for(int i = 1; i < 5; i++)
    {
        if(a[i] != temp) return 0;
    }
    return 1;
}

int baSoDauHaiSoCuoi(char a[])
{
    int idx = 1;
    int temp = a[0];
    while(idx < 2) 
    {
        if(a[idx] != temp) return 0;
        idx++;
    }
    if(a[3] != a[4]) return 0;

    return 1;
}

int sauTam(char a[])
{
    for(int i = 0; i < 5; i++)
    {
        if(a[i] != '6' && a[i] != '8') return 0;
    }
    return 1;
}

int bienSoDep(char bienSo[])
{
    char substr[10];
    int idx = 0;
    for(int i = 6; i <= 11; i++)
    {
        if(i != 9) 
        {
            substr[idx] = bienSo[i];
            idx++;
        }
    }

    if(tangChat(substr) || bangNhau(substr) || baSoDauHaiSoCuoi(substr)) return 1;
    else
    {
        if(sauTam(substr)) return 1;
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        char bienSo[20];
        gets(bienSo);
        if(bienSoDep(bienSo)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}