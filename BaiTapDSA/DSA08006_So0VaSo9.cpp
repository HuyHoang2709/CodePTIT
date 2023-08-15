#include <bits/stdc++.h>

using namespace std;

void res(int n)
{
    queue<int> q;
    q.push(9);
    while(!q.empty())
    {
        int tmp = q.front();
        if(tmp % n == 0) 
        {
            cout << tmp << '\n';
            break;
        }
        else
        {
            q.pop();
            q.push(tmp*10);
            q.push(tmp*10 + 9);
        }
    }
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