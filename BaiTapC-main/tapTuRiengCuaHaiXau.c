#include <stdio.h>
#include <string.h>

int main() {
	char s1[105], s2[105], temp[50];
	char f1[50][50], f2[50][50];
	int i1 = 0, i2 = 0;
	char *t1, *t2;
	gets(s1);
	gets(s2);
	t2 = strtok(s2, " ");
	while(t2 != NULL) {
		strcpy(f2[i2], t2);
		i2++;
		t2 = strtok(NULL, " ");
	}
	t1 = strtok(s1, " ");
	while(t1 != NULL) {
		strcpy(f1[i1], t1);
		i1++;
		t1 = strtok(NULL, " ");
	}
	for(int i = 0; i < i1-1; i++) {
		for(int j = 0; j < i1-i-1; j++) {
			if(strcmp(f1[j], f1[j+1]) > 0) {
				strcpy(temp, f1[j]);
				strcpy(f1[j], f1[j+1]);
				strcpy(f1[j+1], temp);
			}
		}
	}
	for(int i = 0; i < i1; i++) {
		int kt = 1;
		for(int j = 0; j < i2; j++) {
			if(strcmp(f1[i], f2[j]) == 0) {
				kt = 0;
				break;
			}
		}
		if(kt && strcmp(f1[i], f1[i-1]) != 0) printf("%s ", f1[i]);
	}
	return 0;
}
