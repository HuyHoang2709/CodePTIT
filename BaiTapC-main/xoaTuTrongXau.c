#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int test;
	scanf("%d", &test);
	getchar();
	for(int k = 1; k <= test; k++) 
	{
		char s1[205];
		char s2[25];
		char f[100][100];
		char temp[100];
		int idx = 0;
		gets(s1);
		gets(s2);
		int length2 = strlen(s2);
		for(int i = 0; i < length2; i++)
		{
			s2[i] = tolower(s2[i]);
		}

		// Tach cac tu trong s1, sau do luu cac tu ko trung voi s2 vao mang
		char *t;
		t = strtok(s1, " ");
		while(t != NULL)
		{
			strcpy(temp, t);
			for(int i = 0; i < strlen(temp); i++) temp[i] = tolower(temp[i]);
			if(strcmp(temp, s2) != 0) 
			{
				strcpy(f[idx], t);
				idx++;
			}
			t = strtok(NULL, " ");
		}

		// In ra chuoi sau khi loai bo tu
		printf("Test %d: ", k);
		for(int i = 0; i < idx; i++) printf("%s ", f[i]);
		printf("\n");
	}
	return 0;
}
