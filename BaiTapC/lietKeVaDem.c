#include <stdio.h>
#include <string.h>

int soKhongGiam(char a[])
{
    int length = strlen(a);
    for(int i = 0; i < length-1; i++)
    {
        if(a[i] > a[i+1]) return 0;
    }
    return 1;
}

int main()
{
    char soNhapVao[10000][10];
    char soThoaMan[10000][10];
    char tanSuatXuatHien[10000];
    int k = 0;

    while(scanf("%s", &soNhapVao[k]) != -1) 
    {
        k++;
    }

    int daXuatHien[10000] = {};
    int demSoLanXuatHien;
    int p = 0;

    for(int i = 0; i < k; i++)
    {
        if(daXuatHien[i] == 0)
        {
            demSoLanXuatHien = 1;
            if(soKhongGiam(soNhapVao[i]))
            {
                for(int j = i+1; j < k; j++)
                {
                    if(strcmp(soNhapVao[j], soNhapVao[i]) == 0)
                    {
                        demSoLanXuatHien++;
                        daXuatHien[j] = 1;
                    }
                }
                
                strcpy(soThoaMan[p], soNhapVao[i]);
                tanSuatXuatHien[p] = demSoLanXuatHien;
                p++;
            }
        }
    }

    for(int i = 0; i < p-1; i++)
    {
        for(int j = 0; j < p-i-1; j++)
        {
            if(tanSuatXuatHien[j] < tanSuatXuatHien[j+1])
            {
                char tmp1[10000];
                strcpy(tmp1, soThoaMan[j]);
                strcpy(soThoaMan[j], soThoaMan[j+1]);
                strcpy(soThoaMan[j+1], tmp1);

                int tmp2 = tanSuatXuatHien[j];
                tanSuatXuatHien[j] = tanSuatXuatHien[j+1];
                tanSuatXuatHien[j+1] = tmp2;
            }
        }
    }

    for(int i = 0; i < p; i++)
    {
        printf("%s %d\n", soThoaMan[i], tanSuatXuatHien[i]);
    }
    return 0;
}