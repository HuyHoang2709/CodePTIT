#include <bits/stdc++.h>

using namespace std;

/*
Input:
2
4
1 0 0 0
1 1 0 1 
0 1 0 0 
1 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
*/

int n;
int c[15][15];
vector<string> path;

void input()
{
	path.clear();
	
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j) cin >> c[i][j];
	}
}

void Try(int x, int y, string s) 
{	
	if(x > n || y > n) return;
	if(c[x][y] == 0) return;
	if(x == n && y == n) 
	{
		path.push_back(s);
		return;
	}
	Try(x+1, y, s + "D");
	Try(x, y+1, s + "R");
}

void print()
{
	if(path.size() == 0) cout << -1;
	else 
	{
		sort(path.begin(), path.end());
		for(string it : path) cout << it << ' ';
	}
	cout << '\n';
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		input();
		Try(1, 1, "");
		print();
	}
	return 0;
}

