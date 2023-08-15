#include <bits/stdc++.h>

using namespace std;

int n;
int C[20][20];
int path[20];
bool visited[20];
int FOPT;
int cMin;
int start;
int cost;

void init()
{
	FOPT = cMin = 1e9;
	start = 1;
	cost = 0;
	path[1] = 1;
	memset(visited, false, sizeof(visited));
	
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin >> C[i][j];
			if(C[i][j] != 0) cMin = min(C[i][j], cMin);
		}
	}
}

void Try(int i)
{
	for(int j = 2; j <= n; ++j)
	{
		if(!visited[j])
		{
			path[i] = j;
			visited[j] = true;
			cost += C[path[i-1]][path[i]];
			
			if(i == n) FOPT = min(FOPT, cost + C[path[n]][1]);
			else if(cost + (n - i + 1) * cMin < FOPT) Try(i+1);
			
			visited[j] = false;
			cost -= C[path[i-1]][path[i]];
		}
	}
}

int main()
{
	init();
	Try(2);
	cout << FOPT;
	return 0;
}

