#include <stdio.h>

int main() {
    int n;
    int tong = 0; // ko khởi tạo thì nó random giá trị cho biến đấy
    scanf("%d", &n); // B1
    int i;
    for(i = 1; i < n; i++) { //B2
        if(n % i == 0) {
            tong = tong + i;
        }
    }
    // B3
    printf("%d", tong == n); 
    return 0;
}
