#include <bits/stdc++.h>

using namespace std;

bool visited[1005];
vector<int> adj[1005];

void DFS(int u)
{
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v]) DFS(v);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < 1005; ++i) adj[i].clear();
        int v, e;
        cin >> v >> e;
        for(int i = 1; i <= e; ++i) 
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int q;
        cin >> q;
        while(q--)
        {
            memset(visited, false, sizeof(visited));
            int a, b;
            cin >> a >> b;
            DFS(a);
            if(!visited[b]) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}