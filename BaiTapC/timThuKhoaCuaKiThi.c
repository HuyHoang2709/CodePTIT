#include <stdio.h>
#include <string.h>

struct thiSinh
{
    int stt;
    char ten[100];
    char ngaySinh[20];
    float tongDiem;
};

int main()
{
    int n;
    float max = 0, diem1, diem2, diem3;
    scanf("%d", &n);
    struct thiSinh ds[n];
    for(int i = 0; i < n; i++)
    {
        getchar();
        ds[i].stt = i + 1;
        gets(ds[i].ten);
        gets(ds[i].ngaySinh);
        scanf("%f %f %f", &diem1, &diem2, &diem3);
        ds[i].tongDiem = diem1 + diem2 + diem3;
        if(max < ds[i].tongDiem) max = ds[i].tongDiem;
    }
    for(int i = 0; i < n; i++)
    {
        if(ds[i].tongDiem == max)
        {
            printf("%d %s %s %.1f\n", ds[i].stt, ds[i].ten, ds[i].ngaySinh, max);
        }
    }
    return 0;
}