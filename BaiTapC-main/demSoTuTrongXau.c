#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while(t--) {
        int dem = 0;
        char a[205];
        gets(a);
        char *t;
        t = strtok(a, " ");
        while(t != NULL) {
            t = strtok(NULL, " ");
            dem++;
        }
        printf("%d\n", dem);
    }
    return 0;
}