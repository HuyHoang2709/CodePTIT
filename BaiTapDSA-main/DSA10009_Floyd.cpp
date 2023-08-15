#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int d[n+1][n+1];

    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            if(i == j) d[i][j] = 0;
            else d[i][j] = 1e9;
        }
    }

    while(m--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        d[u][v] = d[v][u] = c;
    }

    for(int k = 1; k <= n; ++k)
    {
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(d[i][j] > d[i][k] + d[k][j]) d[i][j] = d[i][k] + d[k][j];
            }
        }
    }

    int t;
    cin >> t;
    while(t--)
    {
        int u, v;
        cin >> u >> v;
        cout << d[u][v] << '\n';
    }
    return 0;
}