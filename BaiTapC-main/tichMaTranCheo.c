#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int idx = 1; idx <= t; idx++) {
		int n;
		scanf("%d", &n);
		int a[n][n];
		int b[n][n];
		for(int i = 0; i < n; i++) {
			int dem = 1;
			for(int j = 0; j <= i; j++) {
				a[i][j] = dem;
				dem++;
				b[j][i] = a[i][j];
			}
			for(int j = i+1; j < n; j++) {
				a[i][j] = b[j][i] = 0;
			}
		}
		printf("Test %d:\n", idx);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				long long temp = 0;
				for(int k = 0; k < n; k++) {
					temp += (long long)a[i][k] * b[k][j];
				}
				printf("%lld ", temp);
			}
			printf("\n");
		}
	}
	return 0;
}
