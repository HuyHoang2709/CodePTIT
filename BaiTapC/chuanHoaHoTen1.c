#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--) {
		char name[85];
		char *t;
		gets(name);
		t = strtok(name, " ");
		while(t != NULL) {
			int length = strlen(t);
			t[0] = toupper(t[0]);
			for(int i = 1; i < length; i++) {
				t[i] = tolower(t[i]);
			}
			printf("%s ", t);
			t = strtok(NULL, " ");
		}
		printf("\n");
	}
	return 0;
}
