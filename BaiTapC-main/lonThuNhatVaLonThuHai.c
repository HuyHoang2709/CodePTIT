#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n ; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] < a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%d ", a[0]);
    int idx = 1;
    while(a[idx] == a[0]) {
        idx++;
    }
    printf("%d", a[idx]);
    return 0;
}