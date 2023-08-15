#include <stdio.h>
#include <string.h>

int main() {
    char a[100005];
    gets(a);
    int length = (int) strlen(a);
    printf("%d", length-1);
    return 0;
}