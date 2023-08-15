#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct sinhVien
{
    char ten[100];
    float monA;
    float monB;
    float monC;
    int stt;
    bool diemTangDan;
};

int main()
{
    int option;
    int idx = 0;
    struct sinhVien ds[100];
    scanf("%d", &option);
    while(option != 3)
    {
        // Them sinh vien vao danh sach
        if(option == 1)
        {
            int n;
            scanf("%d", &n);
            for(int i = 1; i <= n; i++)
            {
                ds[idx].stt = idx + 1;
                getchar();
                gets(ds[idx].ten);
                scanf("%f %f %f", &ds[idx].monA, &ds[idx].monB, &ds[idx].monC);
                if(ds[idx].monA < ds[idx].monB && ds[idx].monB < ds[idx].monC)
                {
                    ds[idx].diemTangDan = true;
                }
                else 
                {
                    ds[idx].diemTangDan = false;
                }
                idx++;
            }
            printf("%d\n", n);
        } 

        // Chinh sua thong tin sinh vien trong danh sach
        if(option == 2)
        {
            int maSV;
            scanf("%d", &maSV);
            getchar();
            gets(ds[maSV-1].ten);
            scanf("%f %f %f", &ds[maSV-1].monA, &ds[maSV-1].monB, &ds[maSV-1].monC);
            if(ds[maSV-1].monA < ds[maSV-1].monB && ds[maSV-1].monB < ds[maSV-1].monC)
            {
                ds[maSV-1].diemTangDan = true;
            }
            else 
            {
                ds[maSV-1].diemTangDan = false;
            }
            printf("%d\n", maSV);
        }

        scanf("%d", &option);
    }

    // In ra danh sach sinh vien thoa man
    for(int i = 0; i < idx; i++)
    {
        if(ds[i].diemTangDan)
        {
            printf("%d %s %.1f %.1f %.1f\n", ds[i].stt, ds[i].ten, ds[i].monA, ds[i].monB, ds[i].monC);
        }
    }
    return 0;
}