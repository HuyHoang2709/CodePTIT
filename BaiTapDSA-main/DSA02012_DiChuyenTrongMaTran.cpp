#include <bits/stdc++.h>

using namespace std;

/*
Input:
2
2 3
1 2 3 
4 5 6
2 2
1 2 
3 4
*/

int m, n;
int c[15][15];
int cnt;

void input()
{
	cnt = 0;
	
	cin >> m >> n;
	for(int i = 1; i <= m; ++i)
	{
		for(int j = 1; j <= n; ++j) cin >> c[i][j];
	}
}

void Try(int x, int y) 
{	
	if(x > m || y > n) return;
	if(x == m && y == n) 
	{
		++cnt;
		return;
	}
	Try(x+1, y);
	Try(x, y+1);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		input();
		Try(1, 1);
		cout << cnt << '\n';
	}
	return 0;
}

