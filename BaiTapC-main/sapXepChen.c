#include <stdio.h>

int main() {
	int n, dem = 1, j, current;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	if(a[0] < a[1]) printf("Buoc 0: %d\n", a[0]);
	
	for(int i = 1; i < n; i++) {
		current = a[i];
		j = i - 1;
		
		while(j >= 0 && a[j] > current) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = current;
		
		printf("Buoc %d: ", dem);
		for(int k = 0; k <= dem; k++) {
			printf("%d ", a[k]);
		}
		printf("\n");
		dem++;
	}
	return 0;
}
