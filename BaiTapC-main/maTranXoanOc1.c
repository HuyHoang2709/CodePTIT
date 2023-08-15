#include <stdio.h> 

int main() {
	int n;
	scanf("%d", &n);
	int a[n][n];
	int d = 0, hang = n-1, cot = n-1, dem = 1;
	while(d <= n / 2) {
		for(int i = d; i <= cot; i++) a[d][i] = dem++;
		for(int i = d+1; i <= hang; i++) a[i][cot] = dem++;
		for(int i = cot-1; i >= d; i--) a[hang][i] = dem++;
		for(int i = hang-1; i >= d+1; i--) a[i][d] = dem++;
		d++;
		hang--;
		cot--;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
