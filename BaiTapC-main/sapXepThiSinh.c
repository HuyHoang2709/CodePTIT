#include <stdio.h>
#include <string.h>

struct sinhVien
{
    char ten[100];
    char ngaySinh[20];
    float tongDiem;
    int stt;
};

int main()
{
    int n;
    float diem1, diem2, diem3;
    scanf("%d", &n);
    struct sinhVien danhSachSinhVien[n];
    // Nhap du lieu sinh vien
    for(int i = 0; i < n; i++)
    {
        getchar();
        danhSachSinhVien[i].stt = i+1;
        gets(danhSachSinhVien[i].ten);
        gets(danhSachSinhVien[i].ngaySinh);
        scanf("%f %f %f", &diem1, &diem2, &diem3);
        danhSachSinhVien[i].tongDiem = diem1 + diem2 + diem3;
    }
    // Sap xep danh sach sinh vien
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(danhSachSinhVien[j].tongDiem < danhSachSinhVien[j+1].tongDiem)
            {
                struct sinhVien temp = danhSachSinhVien[j];
                danhSachSinhVien[j] = danhSachSinhVien[j+1];
                danhSachSinhVien[j+1] = temp;
            }
        }
    }
    // In ra man hinh danh sach sinh vien da duoc sap xep
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %s %.1f\n", danhSachSinhVien[i].stt, danhSachSinhVien[i].ten, danhSachSinhVien[i].ngaySinh, danhSachSinhVien[i].tongDiem);
    }
    return 0;
}