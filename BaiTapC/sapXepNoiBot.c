#include <stdio.h>

int main() {
	int n, step = 1;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n-1; i++) {
		int change = 0;
		for(int j = 0; j < n-i-1; j++) {
			if(a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				change = 1;
			}
		}
		if(change) {
			printf("Buoc %d: ", step);
			step++;
			for(int j = 0; j < n; j++) printf("%d ", a[j]);
			printf("\n");
		}
	}
	return 0;
}
