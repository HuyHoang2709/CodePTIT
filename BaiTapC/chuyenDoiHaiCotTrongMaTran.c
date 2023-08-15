#include <stdio.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int c, d;
	scanf("%d %d", &c, &d);
	for(int i = 0; i < m; i++) {
		int temp = a[i][c-1];
		a[i][c-1] = a[i][d-1];
		a[i][d-1] = temp;
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
