#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

int tinh(int n, int k)
{
	int f[100005] = {};
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i <= n; ++i)
	{
		for(int j = 1; j <= min(i, k); ++j)
		{
			f[i] = (f[i] + f[i-j]) % mod;
		}
	}
	return f[n];
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		cout << tinh(n, k) << '\n'; 
	}
	return 0;
}

