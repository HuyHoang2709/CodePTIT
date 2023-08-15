#include <stdio.h>

int main() {
	int doiTien[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t, n, dem, idx;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		dem = 0;
		idx = 9;
		while(idx >= 0 && n > 0) {
			while(n >= doiTien[idx]) {
				dem += n / doiTien[idx];
				n -= (n / doiTien[idx]) * doiTien[idx];
			}
			idx--;
		}
		printf("%d\n", dem);
	}
	return 0;
}
