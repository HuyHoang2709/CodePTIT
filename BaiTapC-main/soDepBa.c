#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nto(char a[]) {
    int length = strlen(a);
    for(int i = 0; i < length; i++) {
        if(a[i] != '2' && a[i] != '3' && a[i] != '5' && a[i] != '7') return 0;
    } 
    return 1;
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
        if(thuanNghich(a) && nto(a)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}