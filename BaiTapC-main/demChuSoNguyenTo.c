#include <stdio.h>

int nt(int n) {
    return n == 2 || n == 3 || n == 5 || n == 7;
}

int main() {
    long long n;
    scanf("%lld", &n);
    int f[10] = {};
    int a[10];
    int idx = 0, temp;
    while(n > 0) {
    	temp = (int) n % 10;
    	a[idx] = temp;
    	idx++;
    	f[temp]++;
		n /= 10;
	}
	for(int i = idx-1; i >= 0; i--) {
		if(nt(a[i]) && f[a[i]] > 0) {
			printf("%d %d\n", a[i], f[a[i]]);
			f[a[i]] = 0;
		}
	}
    return 0;
}
