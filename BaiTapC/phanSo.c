#include <stdio.h>

int lcm(int a, int b)
{
    while(a != b)
    {
        if(a < b) 
            b = b - a;
        else 
            a = a - b;
    }
    return a;
}

struct phanSo
{
    int tuSo;
    int mauSo;
};

void rutGon(struct phanSo *a)
{
    int ucln = lcm(a -> tuSo, a -> mauSo);
    if(ucln != 1 && a -> tuSo != 0)
    {
        a -> tuSo = a -> tuSo / ucln;
        a -> mauSo = a -> mauSo / ucln;
    }
}

void quyDong(struct phanSo *a, struct phanSo *b)
{
    int mauSoChung = a->mauSo * b->mauSo / lcm(a->mauSo, b->mauSo);
    a->tuSo = a->tuSo * (mauSoChung / a->mauSo);
    b->tuSo = b->tuSo * (mauSoChung / b->mauSo);
    a->mauSo = b->mauSo = mauSoChung;
}

void in(struct phanSo a)
{
    printf("%d/%d ", a.tuSo, a.mauSo);
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        struct phanSo a;
        struct phanSo b;
        struct phanSo tong, thuong;
        scanf("%d %d %d %d", &a.tuSo, &a.mauSo, &b.tuSo, &b.mauSo);

        printf("Case #%d:\n", i);

        // Rut gon 2 phan so, sau do quy dong
        rutGon(&a);
        rutGon(&b);
        quyDong(&a, &b);

        // Tinh tong va thuong 2 phan so, sau do rut gon
        tong.tuSo = a.tuSo + b.tuSo;
        tong.mauSo = a.mauSo;
        rutGon(&tong);
        thuong.tuSo = a.tuSo * b.mauSo;
        thuong.mauSo = a.mauSo * b.tuSo;
        rutGon(&thuong);

        // In ra 2 phan so, dong thoi in ra tong va thuong
        in(a);
        in(b);
        printf("\n");
        in(tong);
        printf("\n");
        in(thuong);
        printf("\n");
    }
    return 0;
}