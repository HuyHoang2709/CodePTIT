#include <stdio.h>

int main() {
	int n, step = 1;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n-1; i++) {
		int min = i;
		for(int j = i+1; j < n; j++) {
			if(a[j] < a[min]) {
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		// printf("Buoc %d: ", step);
		step++;
		for(int i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
	}
	return 0;
}
