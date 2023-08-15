#include <stdio.h>

int nTo(int n) {
    if(n <= 3) {
        return n > 1;
    } else {
        if(n % 2 == 0 || n % 3 == 0) {
            return 0;
        } else {
            for(int i = 5; i * i <= n; i += 6) {
                if(n % i == 0 || n % (i+2) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("2\n");
    int count = 2;
    if(n > 1) {
        int temp = 3;
        while(count <= n) {
            if(nTo(temp) == 1) {
                printf("%d\n", temp);
                count++;
            }
            temp += 2;
        }
    }
}