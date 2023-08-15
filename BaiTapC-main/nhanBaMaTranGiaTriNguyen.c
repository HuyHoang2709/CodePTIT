#include <stdio.h>

int main() {
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a[m][n], b[n][p], c[p][q];
	long long temp[m][p], d[m][q];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < p; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < p; i++) {
		for(int j = 0; j < q; j++) {
			scanf("%d", &c[i][j]);
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < p; j++) {
			long long tich = 0;
			for(int k = 0; k < n; k++) {
				tich += (long long) a[i][k] * b[k][j];
			}
			temp[i][j] = tich;
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < q; j++) {
			long long tich = 0;
			for(int k = 0; k < p; k++) {
				tich += (long long) temp[i][k] * c[k][j];
			}
			d[i][j] = tich;
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < q; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
