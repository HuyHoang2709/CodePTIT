#include <stdio.h>
#include <string.h>

int main() {
	char name[55];
	char f[20][20];
	char *t;
	int idx = 0;
	gets(name);
	t = strtok(name, " ");
	while(t != NULL) {
		int length = strlen(t);
		for(int i = 0; i < length; i++) t[i] = tolower(t[i]);
		strcpy(f[idx], t);
		idx++;
		t = strtok(NULL, " ");
	}
	for(int i = 0; i < idx; i++) {
		if(i < idx-1) printf("%c", f[i][0]);
		else printf("%s@ptit.edu.vn", f[i]);
	}
	return 0;
}
