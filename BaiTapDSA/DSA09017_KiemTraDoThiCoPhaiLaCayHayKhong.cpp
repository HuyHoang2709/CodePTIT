#include <bits/stdc++.h>

using namespace std;

bool visited[1005];
vector<int> adj[1005];

void DFS(int u)
{
    visited[u] = true;
    for(auto v : adj[u])
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
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < 1005; ++i) adj[i].clear();
        int n;
        cin >> n;
        for(int i = 1; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        DFS(1);
        bool check = true;
        for(int i = 2; i <= n; ++i)
        {
            if(!visited[i]) check = false;
        }

        if(check) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}