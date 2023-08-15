#include <stdio.h>
 
int main() {
	int n, i, j, k, l;
	scanf("%d", &n);
	// In nua tren cua hinh chu nhat	
	for(i = n; i >= 1; i--) {
		if(i == n) {
			for(j = 1; j <= 2*n-1; j++) {
				printf("%d", n);
			} 
		} else {
			for(k = n; k >= i+1; k--) {
				printf("%d", k);
			}
			for(j = 1; j <= 2*n-1; j++) {
				if(j >= n-i+1 && j <= n+i-1) {
					printf("%d", i);
				} 
			}
			for(l = i+1; l <= n ; l++) {
				printf("%d", l);
			}
		}
		
		printf("\n");
	}
	// In nua duoi cua hinh chu nhat
	for(i = 2; i <= n; i++) {
		if(i == n) {
			for(j = 1; j <= 2*n - 1; j++) {
				printf("%d", n);
			}
		} else {
			for(k = n; k >= i+1; k--) {
				printf("%d", k);
			}
			for(j = 1; j <= 2*n-1; j++) {
				if(j >= n-i+1 && j <= n+i-1) {
					printf("%d", i);
				} 
			}
			for(l = i+1; l <= n ; l++) {
				printf("%d", l);
			}
		}
		printf("\n");
	}
	return 0;
}