#include <stdio.h>
#include <string.h>

int main() {
    char a[2005];
    char b[50][50];
    int idx = 0;
    gets(a);
    char *t;
    t = strtok(a, " ");
    while(t != NULL) {
        strcpy(b[idx], t);
        idx++;
        t = strtok(NULL, " ");
    }
    for(int i = 0; i < idx; i++) {
        int kt = 1;
        for(int j = 0; j < i; j++) {
            if(strcmp(b[i], b[j]) == 0) {
                kt = 0;
                break;
            }    
        }
        if(kt) printf("%s ", b[i]);
    }
    return 0;
}