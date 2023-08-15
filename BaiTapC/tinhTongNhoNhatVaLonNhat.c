#include<stdio.h>
#include<math.h>

long long myPow(long long a, long long b) {
	long long tich = 1;
	while(b--) tich *= a;
	return tich;
}

long long max(long long n) {
	long long idx=0;
	long long x=0;
	while(n>0)
	{
		long long k=n%10;
		if(k==5) k=6;
		x+= k*myPow(10,idx);
		idx++;
		n/=10;
	}
	return x;
}

long long min(long long n) {
	long long idx=0;
	long long x=0;
	while(n>0)
	{
		long long k=n%10;
		if(k==6) k=5;
		x+= k*myPow(10,idx);
		idx++;
		n/=10;
	}
	return x;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld %lld",&a,&b);
		printf("%lld %lld\n",min(a)+min(b),max(a)+max(b));
	}
}
