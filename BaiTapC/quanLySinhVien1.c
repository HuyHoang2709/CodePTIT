#include <stdio.h>
#include <string.h>

struct sinhVien
{
    char ten[100];
    float monA;
    float monB;
    float monC;
    float tongDiem;
    int stt;
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
                ds[idx].tongDiem = ds[idx].monA + ds[idx].monB + ds[idx].monC;
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
            ds[maSV-1].tongDiem = ds[maSV-1].monA + ds[maSV-1].monB + ds[maSV-1].monC;
            printf("%d\n", maSV);
        }

        scanf("%d", &option);
    }
    
    // Sap xep danh sach sinh vien theo thu tu tong diem tang dan
    for(int i = 0; i < idx-1; i++)
    {
        for(int j = 0; j < idx-i-1; j++)
        {
            if(ds[j].tongDiem > ds[j+1].tongDiem)
            {
                struct sinhVien temp = ds[j];
                ds[j] = ds[j+1];
                ds[j+1] = temp;
            }
        }
    }

    // In ra danh sach sinh vien da duoc sap xep
    for(int i = 0; i < idx; i++)
    {
        printf("%d %s %.1f %.1f %.1f\n", ds[i].stt, ds[i].ten, ds[i].monA, ds[i].monB, ds[i].monC);
    }
    return 0;
}