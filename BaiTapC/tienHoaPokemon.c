#include <stdio.h>
#include <string.h>

struct pokemon
{
    char name[100];
    int evoStone;
    int currentStone;
    int evoQuantity;
};

int main()
{   
    int n, max = 0, tong = 0;
    scanf("%d", &n);
    struct pokemon list[n];
    for(int i = 0; i < n; i++)
    {
        getchar();
        gets(list[i].name);
        scanf("%d %d", &list[i].evoStone, &list[i].currentStone);

        list[i].evoQuantity = list[i].currentStone / list[i].evoStone;
        list[i].currentStone = list[i].currentStone % list[i].evoStone + list[i].currentStone / list[i].evoStone * 2;
        while(list[i].currentStone >= list[i].evoStone)
        {
            list[i].evoQuantity += list[i].currentStone / list[i].evoStone;
            list[i].currentStone = list[i].currentStone % list[i].evoStone + list[i].currentStone / list[i].evoStone * 2;
        }
        tong += list[i].evoQuantity;

        if(max < list[i].evoQuantity) max = list[i].evoQuantity;
    }
    for(int i = 0; i < n; i++)
    {
        if(list[i].evoQuantity == max)
        {
            printf("%d\n%s", tong, list[i].name);
            break;
        }
    }
    return 0;
}