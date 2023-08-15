#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int le = 0, chan = 0, temp;
    while(n / 10 != 0) {
        temp = n % 10;
        if(temp % 2 == 0) {
            chan++;
        } else {
            le++;
        }
        n = n / 10;
    }
    if(n % 2 == 0) chan++;
    else le++;
    printf("%d %d", le, chan);
    return 0;
}