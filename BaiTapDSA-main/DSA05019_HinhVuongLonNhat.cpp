#include <bits/stdc++.h>

using namespace std;

int a[505][505];
int f[505][505];
int n, m;

int qhd()
{
	memset(f, 0, sizeof(f));
	int ans = 0;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			if(a[i][j]) f[i][j] = min(f[i-1][j], min(f[i][j-1], f[i-1][j-1])) + 1;
			ans = max(ans, f[i][j]);
		}
	}
	return ans;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= m; ++j) cin >> a[i][j];
		}
		cout << qhd() << '\n';
	}
	return 0;
}

