#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], chan[n], le[n];
    int demChan = 0, demLe = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            chan[demChan] = a[i];
            demChan++;
        } else {
            le[demLe] = a[i];
            demLe++;
        }
    }
    for(int i = 0; i < demChan; i++) printf("%d ", chan[i]);
    printf("\n");
    for(int i = 0; i < demLe; i++) printf("%d ", le[i]);
    return 0;
}