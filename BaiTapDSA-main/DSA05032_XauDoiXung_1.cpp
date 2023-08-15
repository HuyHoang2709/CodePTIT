#include <bits/stdc++.h>

using namespace std;

int qhd(string s)
{
	int n = s.length();
	int f[n+5][n+5];
	memset(f, 0, sizeof(f));
	int ans = -1e9;
	for(int i = n-1; i >= 0; --i)
	{
		for(int j = i; j <= n-1; ++j)
		{
			if(i == j) f[i][j] = 1;
			else if(s[i] == s[j])
			{
				if(i == j-1) f[i][j] = 1;
				else f[i][j] = f[i+1][j-1];
			}
			if(f[i][j]) ans = max(ans, j - i + 1);
		}
	}
	return n - ans;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		cout << qhd(s) << '\n';
	}
	return 0;
}

