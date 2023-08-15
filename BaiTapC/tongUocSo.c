#include <stdio.h>

int tongUoc(int n) {
	int sum = 0;
	while(n % 2 == 0) {
		sum += 2;
		n /= 2;
	}
	for(int i = 3; i * i <= n; i += 2) {
		while(n % i == 0) {
			sum += i;
			n /= i;
		}
	}
	if(n > 1) return sum + n;
	else return sum;
}

int main() {
    int t, tong = 0;
    scanf("%d", &t);
    while(t--) {
    	int n;
    	scanf("%d", &n);
    	tong += tongUoc(n);
	}
    printf("%d", tong);
    return 0;
}
