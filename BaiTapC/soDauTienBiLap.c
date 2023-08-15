#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		int check2 = 0;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n-1; i++)
		{
			int check1 = 0;
			for(int j = i+1; j < n; j++) 
			{
				if(a[i] == a[j])
				{
					check1 = 1;
					break;
				}
			}
			if(check1) 
			{
				printf("%d\n", a[i]);
				check2 = 1;
				break;
			}
		}
		if(!check2) 
		{
			printf("NO\n");
		}
	}
	return 0;
}
