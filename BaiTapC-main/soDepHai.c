#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int chan(char a[]) {
    int length = strlen(a);
    if(a[0] != '8' || a[length-1] != '8') return 0;
    else {
        int tong = 0;
        for(int i = 0 ; i < length; i++) {
            int temp = (int) a[i];
            tong = tong + temp - 48;
        }
        return tong % 10 == 0;
    }
}

int thuanNghich(char a[]) {
    int length = strlen(a);
    for(int i = 0; i <= length/2; i++) {
        if(a[i] != a[length - i - 1]) return 0;
    }
    return 1;
}

int main() {
    int t = 1;
    scanf("%d", &t);
    getchar();
    while(t--) {
        char a[505];
        gets(a);
        if(thuanNghich(a) && chan(a)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}