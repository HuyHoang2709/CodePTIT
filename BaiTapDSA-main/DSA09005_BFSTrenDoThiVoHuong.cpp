#include <bits/stdc++.h>

using namespace std;

int visited[1005];
vector<int> adj[1005];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int v : adj[x])
        {
            if(!visited[v]) 
            {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < 1005; ++i) adj[i].clear();
        int v, e, start;
        cin >> v >> e >> start;
        for(int i = 1; i <= e; ++i)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        BFS(start);
        cout << '\n';
    }
    return 0;
}