#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1005];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int v, e;
        cin >> v >> e;
        for(int i = 1; i <= v; ++i) adj[i].clear();
        for(int i = 1; i <= e; ++i) 
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }   
        for(int i = 1; i <= v; ++i) 
        {
            cout << i << ": ";
            for(int u : adj[i]) cout << u << ' ';
            cout << '\n';
        }
    }
    return 0;
}