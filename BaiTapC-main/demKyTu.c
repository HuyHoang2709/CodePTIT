#include <stdio.h>
#include <string.h>

int main() {
    int demChu = 0, demSo = 0, demKiTu = 0;
    char a[2005];
    gets(a);
    int length = strlen(a);
    for(int i = 0 ; i < length; i++) {
        int temp = (int) a[i];
        if((temp >= 97 && temp <= 122) || (temp >= 65 && temp <= 90)) demChu++;
        else if(temp >= 48 && temp <= 57) demSo++;
        else demKiTu++;
    }
    printf("%d %d %d", demChu, demSo, demKiTu);
    return 0;
}