#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        // int x;
        // int danhDauViTri[105];
        // int idx = 0;
        // for(int i = 1; i <= n; i++) {
        //     int kt = 1;
        //     scanf("%d", &x);
        //     if(!(x % 2)) {
        //         for(int j = 0; j < idx; j++) {
        //             if(x == danhDauViTri[j]) kt = 0;
        //         }
        //         if(kt) {
        //             danhDauViTri[idx] = x;
        //             idx++;
        //         }
        //     }
        // }
        // for(int i = 0; i < idx; i++) {
        //     printf("%d ", danhDauViTri[i]);
        // }
        while(n--) {
            int x;
            scanf("%d", &x);
            if(!(x % 2)) printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}