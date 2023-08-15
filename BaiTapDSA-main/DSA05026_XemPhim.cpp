#include <bits/stdc++.h>

using namespace std;

// Bai nay thi w[i] = val[i]

int f[105][25005];
int c, n;
int w[1005];

int qhd()
{
	memset(f, 0, sizeof(f));
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= c; ++j)
		{
			f[i][j] = f[i-1][j];
			if(j >= w[i])
			{
				f[i][j] = max(f[i][j], f[i-1][j-w[i]] + w[i]);	
			}	
		}	
	}
	return f[n][c];
}

int main()
{
	cin >> c >> n;
	for(int i = 1; i <= n; ++i) cin >> w[i];
	cout << qhd();
	return 0;
}

