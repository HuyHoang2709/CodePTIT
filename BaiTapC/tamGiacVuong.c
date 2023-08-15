#include <stdio.h>

int solve(int a[], int n)
{
    long long b[n];
    for(int i = 0; i < n; i++)
    {
        b[i] = (long long) a[i] * a[i];
    }

    for(int i = n-1; i >= 2; i--) // Vong lap nay quan trong
    {
        int l = 0;
        int r = i - 1;
        while(l <= r)
        {
            if(b[i] == b[l]+b[r]) 
            {
                return 1;
            }
            else if (b[i] > b[l]+b[r]) 
            {
                l++;
                // Do sap xep tu be den lon tu trai qua phai nen phai tang phan tu tiep theo ben trai de tang tong
            } 
            else 
            {
                r--;
            }
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%i", &n);
        int a[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        if(solve(a, n) == 1) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}