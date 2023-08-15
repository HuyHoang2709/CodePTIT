#include <stdio.h>
#include <math.h>

int nt(int n)
{
	if(n <= 3) return n > 1;
	else 
	{
		if(n % 2 == 0 || n % 3 == 0) return 0;
		else 
		{
			int sqr = sqrt(n);
			for(int i = 5; i <= sqr; i += 6)
			{
				if(n % i == 0 || n % (i+2) == 0) return 0;
			}
		}
	}
	return 1;
}

int chuSo(int n)
{
	int tmp, sum = 0;
	while(n > 0)
	{
		tmp = n % 10;
		if(tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7) return 0;
		sum += tmp;
		n /= 10;
	}
	return nt(sum);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		int dem = 0;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++)
		{
			if(chuSo(i) && nt(i)) dem++;
		}
		printf("%d\n", dem);
	}
	return 0;
}
