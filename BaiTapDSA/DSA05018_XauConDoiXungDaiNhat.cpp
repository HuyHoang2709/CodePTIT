#include <bits/stdc++.h>

using namespace std;

string s;
bool f[1005][1005];

int qhd()
{
	int n = s.size();
	int ans = -1e9;
	memset(f, false, sizeof(f));
	for(int i = n-1; i >= 0; --i)
	{
		for(int j = i; j <= n-1; ++j)
		{
			if(i == j) f[i][j] = true;
			else if(s[i] == s[j])
			{
				if(i == j-1) f[i][j] = true;
				else f[i][j] = f[i+1][j-1];
			}
			if(f[i][j]) ans = max(ans, j - i + 1);
		}
	}
	return ans;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		cin >> s;
		cout << qhd() << '\n';
	}
	return 0;
}

