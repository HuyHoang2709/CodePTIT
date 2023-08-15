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
	int n;
	scanf("%d", &n);
	int a[n][n];
	int hang[n];
	int maxnt = 0;

	for(int i = 0; i < n; i++) hang[i] = 0;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if(nt(a[i][j])) hang[i]++;
		}
		if(maxnt < hang[i]) maxnt = hang[i];
	}
	for(int i = 0; i < n; i++) {
		if(hang[i] == maxnt) {
			printf("%d\n", i+1);
			for(int j = 0; j < n; j++) {
				if(nt(a[i][j])) printf("%d ", a[i][j]);
			}
			break;
		}
	}
	return 0;
}
