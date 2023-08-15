#include <bits/stdc++.h>

using namespace std;

int cnt;
int OK;
int n, S;
int a[35];

void init()
{
	cnt = 0;
	OK = 0;
	cin >> n >> S;
	
	for(int i = 1; i <= n; ++i) cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
}

void Try(int i, int s)
{
	if(OK) return;
	for(int j = 1; j >= 0; --j)
	{
		s += a[i] * j;
		cnt += j;
		
		if(s == S)
		{
			OK = 1;
			cout << cnt << '\n';
			return;
		}
		if(s < S && i < n) Try(i+1, s);
		
		s -= a[i] * j;
		cnt -= j;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		init();
		Try(1, 0);
		if(!OK) cout << -1 << '\n';
	}
	return 0;
}

