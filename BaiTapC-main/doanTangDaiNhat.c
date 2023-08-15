#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        // Nhap phan tu cua mang
        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        int max = 1; 
        int count = 1; // dem so day con tang co do dai bang max
        int dem = 1;   // dem do dai cua mot day tang
        
        b[0] = 0;
        
        // Tim do dai day con tang lien tiep dai nhat, dong thoi luu chi so cac day con
        for(int i = 1; i < n; i++)
        {
            if(a[i] > a[i-1]) dem++;
            else dem = 1;

            if(dem > max)
            {
                max = dem;
                b[0] = i - max + 1; // Quan trong
                count = 1;
            }
            else if(dem == max)
            {
                b[count] = i - max + 1; // Quan trong
                count++;
            }
        }

        printf("Test %d:\n", k);
        printf("%d\n", max);

        for(int i = 0; i < count; i++)
        {
            for(int j = 0; j < max; j++)
            {
                printf("%d ", a[b[i]+j]);
            }
            printf("\n");
        }
    }
    return 0;
}