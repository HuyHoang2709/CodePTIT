#include <stdio.h>
#include <string.h>

int soDayDu(char s[]) {
	int length = strlen(s), kt = 1;
	int f[10] = {};
	for(int i = 0; i < length; i++) {
		if(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
			f[s[i] - '0']++;
		} else {
			kt = 0;
			break;
		}
	}
	if(kt == 0 || s[0] == '0') return -1;
	else {
		for(int i = 0; i < 10; i++) {
			if(f[i] == 0) {
				kt = 0;
				break;
			}
		}
	}
	return kt;
}

int main() {
	int t = 1;
	scanf("%d", &t);
	while(t--) {
		getchar();
		char s[1005];
		scanf("%s", &s);
		if(soDayDu(s) == 1) {
			printf("YES\n");
		} else if(soDayDu(s) == 0) {
			printf("NO\n");
		} else {
			printf("INVALID\n");
		}
	}
	return 0;
}
