#include <stdio.h>
#include <string.h>

struct matHang
{
    int stt;
    char ten[100];
    char nhomHang[50];
    float loiNhuan;
};

int main()
{
    int n;
    scanf("%d", &n);
    float giaMua, giaBan;
    struct matHang ds[n], temp;
    for(int i = 0; i < n; i++)
    {
        getchar();
        ds[i].stt = i + 1;
        gets(ds[i].ten);
        gets(ds[i].nhomHang);
        scanf("%f %f", &giaMua, &giaBan);
        ds[i].loiNhuan = giaBan - giaMua;
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(ds[j].loiNhuan < ds[j+1].loiNhuan)
            {
                temp = ds[j];
                ds[j] = ds[j+1];
                ds[j+1] = temp; 
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %s %.2f\n", ds[i].stt, ds[i].ten, ds[i].nhomHang, ds[i].loiNhuan);
    }
    return 0;
}