#include <stdio.h>
#include <string.h>

int main() {
	char a[205];
	char b[50][50];
	char * t;
	int f[50] = {};
	int idx = 0;
	gets(a);
	t = strtok(a, " ");
	while(t != NULL) {
		int kt = 1;
		for(int i = 0; i < strlen(t); i++) {
			t[i] = tolower(t[i]);
		}
		for(int i = 0; i < idx; i++) {
			if(strcmp(t, b[i]) == 0) {
				f[i]++;
				kt = 0;
				break;
			}
		}
		if(kt) {
			strcpy(b[idx], t);
			f[idx]++;
			idx++;
		}
		t = strtok(NULL, " ");
	}
	for(int i = 0; i < idx; i++) {
		printf("%s %d\n", b[i], f[i]);
	}
	return 0;
}
