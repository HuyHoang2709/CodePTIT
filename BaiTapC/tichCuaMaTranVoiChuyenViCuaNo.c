#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int idx = 1; idx <= t; idx++) {
		int m, n;
		scanf("%d %d", &m, &n);
		int a[m][n];
		int b[n][m];
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}
		}
		printf("Test %d:\n", idx);
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
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
