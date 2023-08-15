#include <stdio.h>
#include <string.h>

int main() {
    char a[2005];
    char b[205];
    gets(a);
    gets(b);
    char *t;
    t = strtok(a, " ");
    while(t != NULL) {
        if(strcmp(t, b) != 0) printf("%s ", t);
        t = strtok(NULL, " "); 
    }
    return 0;
}