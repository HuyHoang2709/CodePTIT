#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;
int a[1005];
int f[1005];

int tinh(int n, int k)
{
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for(int i = 1; i <= k; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			if(a[j] <= i) f[i] = (f[i] + f[i - a[j]]) % mod;
		}
	}
	return f[k];
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		for(int i = 1; i <= n; ++i) cin >> a[i];
		cout << tinh(n, k) << '\n';
	}
	return 0;
}

