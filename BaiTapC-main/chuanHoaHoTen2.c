#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char name[85];
		char *t;
		char f[50][50];
		int idx = 0;
		gets(name);
		t = strtok(name, " ");
		while(t != NULL) {
			int length = strlen(t);
			t[0] = toupper(t[0]);
			for(int i = 1; i < length; i++) {
				if(idx == 0) {
					t[i] = toupper(t[i]);
				} else {
					t[i] = tolower(t[i]);
				}
			}
			strcpy(f[idx], t);
			idx++;
			t = strtok(NULL, " ");
		}
		for(int i = 1; i < idx; i++) {
			if(i < idx-1) printf("%s ", f[i]);
			else printf("%s, ", f[i]);
		}
		printf("%s\n", f[0]);
	}
	return 0;
}
