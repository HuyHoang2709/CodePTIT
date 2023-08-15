#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, max = 0;
		int f[30005] = {};
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			f[a[i]]++;
			if(max < f[a[i]]) max = f[a[i]];
		}
		for(int i = 0; i < n; i++) {
			if(f[a[i]] == max) {
				printf("%d ", a[i]);
				f[a[i]] = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
