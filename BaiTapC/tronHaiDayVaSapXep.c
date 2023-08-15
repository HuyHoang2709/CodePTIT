#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++) {
		int n;
		scanf("%d", &n);
		int a[n];
		int b[n];
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < n; i++) scanf("%d", &b[i]);
		for(int i = 0; i < n-1; i++) {
			for(int j = 0; j < n-i-1; j++) {
				if(a[j] > a[j+1]) {
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
				if(b[j] < b[j+1]) {
					int tmp = b[j];
					b[j] = b[j+1];
					b[j+1] = tmp;
				}
			}
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++) {
			printf("%d %d ", a[i], b[i]);
		}
		printf("\n");
	}
	return 0;
}
