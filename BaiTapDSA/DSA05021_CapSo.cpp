#include <bits/stdc++.h>

using namespace std;

int f[105];

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		pair<int, int> a[n];
		for(int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second;
		
		sort(a, a + n, cmp);
		
		for(int i = 0; i < n; ++i) f[i] = 1;
		int ans = 0;
		for(int i = 1; i < n; ++i)
		{
			for(int j = 0; j < i; ++j)
			{
				if(a[j].second < a[i].first) f[i] = max(f[i], f[j] + 1);
			}
			ans = max(ans, f[i]);
		}
		cout << ans << '\n';
	}
	return 0;
}

