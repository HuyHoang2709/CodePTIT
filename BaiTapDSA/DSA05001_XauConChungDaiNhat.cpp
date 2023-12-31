#include <bits/stdc++.h>

using namespace std;

int c[1005][1005];
string s1, s2;

int qhd(int n, int m)
{
	memset(c, 0, sizeof(c));
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			if(s1[i-1] == s2[j-1]) c[i][j] = c[i-1][j-1] + 1;
			else c[i][j] = max(c[i][j-1], c[i-1][j]);
		}
	}
	return c[n][m];
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		cin >> s1 >> s2;
		int n = s1.length();
		int m = s2.length();
		cout << qhd(n, m) << '\n';
	}
	return 0;
}

