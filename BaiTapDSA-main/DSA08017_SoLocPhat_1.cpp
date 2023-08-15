#include <bits/stdc++.h>

using namespace std;

void res(int n)
{
    queue<string> q;
    q.push("6");
    q.push("8");
    vector<string> vs;
    while(true)
    {
        string tmp = q.front();
        q.pop();
        vs.push_back(tmp);
        if(tmp.length() <= n-1)
        {
            q.push(tmp + '6');
            q.push(tmp + '8');
        }
        else break;
    }
    while(q.size()) 
    {
        string tmp = q.front(); q.pop();
        vs.push_back(tmp);
    }
    reverse(vs.begin(), vs.end());
    for(auto i : vs) cout << i << ' ';
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        res(n);
    }
    return 0;
}