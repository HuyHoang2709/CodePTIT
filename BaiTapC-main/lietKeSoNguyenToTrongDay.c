#include <stdio.h>

int nt(int n) {
	if(n <= 3) return n > 1;
	else {
		if(n % 2 == 0 || n % 3 == 0) return 0;
		else {
			for(int i = 5; i * i <= n; i += 6) {
				if(n % i == 0 || n % (i+2) == 0) return 0;
			}
		}
	}
	return 1;
}

int main() {
    int n, idx = 0, dem = 0;
    scanf("%d", &n);
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
    	scanf("%d", &a[i]);
    	if(nt(a[i])) {
    		b[idx] = a[i];
    		dem++;
    		idx++;
		}
	}
	printf("%d ", dem);
	for(int i = 0; i < idx; i++) printf("%d ", b[i]);
    return 0;
}
