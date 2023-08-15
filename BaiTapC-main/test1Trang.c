#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n == 0) {
		printf("0");
	} else {
		int a[50];
		int idx = 0;
		while(n > 0) {
			a[idx] = n % 2;
			n /= 2;
			idx++;
		}
		for(int i = idx-1; i >= 0; i--) printf("%d", a[i]);
	}
	return 0;
}
