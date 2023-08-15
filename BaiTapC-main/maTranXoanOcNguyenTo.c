#include <stdio.h>
#include <math.h>

int main() {
	// Dung sang nguyen to de loc cac so nguyen to
	int a = 10000;
	int sqr = sqrt(a);
	int notPrime[10005] = {};
	notPrime[0] = notPrime[1] = 1;
	for(int i = 2; i <= sqr; ++i) {
		if(notPrime[i] == 0) {
			for(int j = i * i; j <= a; j += i) {
				notPrime[j] = 1;
			}
		}
	}

	// Lam bo test in ra man hinh
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++) {
		int n;
		scanf("%d", &n);
		int b[n][n];
		int d = 0, hang = n - 1, cot = n - 1, gt = 2, luu;
		while(d <= n / 2) {
			for(int i = d; i <= cot; ++i) {
				b[d][i] = gt;
				luu = gt;
				gt++;
				while(notPrime[gt] == 1) ++gt;
			}
			for(int i = d+1; i <= hang; ++i) {
				b[i][cot] = gt;
				luu = gt;
				gt++;
				while(notPrime[gt] == 1) ++gt;
			}
			for(int i = cot-1; i >= d; --i) {
				b[hang][i] = gt;
				luu = gt;
				gt++;
				while(notPrime[gt] == 1) ++gt;
			}
			for(int i = hang-1; i > d; --i) {
				b[i][d] = gt;
				luu = gt;
				gt++;
				while(notPrime[gt] == 1) ++gt;
			}
			++d;
			--hang;
			--cot;
		}
		printf("Test %d:\n", k);
		if(luu <= 10) {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					printf("%d ", b[i][j]);
				}
				printf("\n");
			}
		} else if(luu < 100) {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					printf("%2d ", b[i][j]);
				}
				printf("\n");
			}
		} else if(luu < 1000) {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					printf("%3d ", b[i][j]);
				}
				printf("\n");
			}
		} else {
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					printf("%4d ", b[i][j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
