#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1005] = {};
	int f[1005] = {};
	int res = 0;
	for(int i = 0; i < n; ++i)
	{
		f[i] = 1;
		cin >> a[i];
		for(int j = 0; j < i-1; ++j)
		{
			if(a[j] < a[i]) f[i] = max(f[i], f[j] + 1);
		}
		res = max(res, f[i]);
	}
	cout << res + 1 << '\n';
	return 0;
}

