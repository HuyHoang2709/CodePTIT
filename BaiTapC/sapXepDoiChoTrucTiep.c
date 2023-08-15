#include <stdio.h>

int main() {
	int n, dem = 1;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n-1; i++) {
		int kt = 0;
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				kt = 1;
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		if(kt) {
			printf("Buoc %d: ", dem);
			for(int i = 0; i < n; i++) printf("%d ", a[i]);
			printf("\n");
			dem++;
		}
	}
	return 0;
}
