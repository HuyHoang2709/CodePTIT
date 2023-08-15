#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int x;
		int dem = 0;
		int chan = 0, le = 0;
		char kt = ' ';
		while(kt == ' ') 
		{
		    scanf("%d", &x);
			dem++;
			if(x % 2 == 0) chan++;
			else le++;
			kt = getchar();
		}
		if ((dem % 2 == 0 && chan > le) ||(dem % 2 == 1 && le > chan)) printf("YES\n");
		else printf("NO\n");
	}
}