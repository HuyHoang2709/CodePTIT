#include <bits/stdc++.h>

using namespace std;

int c[1005][1005];
int n, V;
int w[1005];
int v[1005];

int qhd()
{
	memset(c, 0, sizeof(c));
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= V; ++j)
		{
			c[i][j] = c[i-1][j];
			if(j >= w[i])
			{
				c[i][j] = max(c[i][j], c[i-1][j-w[i]] + v[i]);	
			}	
		}	
	}
	return c[n][V];	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> V;
		for(int i = 1; i <= n; ++i) cin >> w[i];
		for(int i = 1; i <= n; ++i) cin >> v[i];
		cout << qhd() << '\n';
	}
	return 0;
}

