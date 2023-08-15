#include <stdio.h>

int main() {
    // ASCII cua 'a' la 97.
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a;
    if(max < b) max = b; 
    for(int i = 1; i <= a; i++) {
        int c = 97 + max - 1;
        int d = c-i+1;
        int count = 1;
        for(int j = c; j >= c-i+1; j--) {
            if(count > b) break;
            printf("%c", j);
            count++;
        }
        while(count <= b) {
            printf("%c", d);
            count++;
        }
        printf("\n");
    }
}