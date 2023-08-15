#include <bits/stdc++.h>

using namespace std;

int bienDoi(int s, int t)
{
    int a[20001] = {};
    queue<int> q;
    q.push(s);
    while(a[t] == 0)
    {
        int x = q.front();
        q.pop();
        if(x - 1 > 0 && a[x-1] == 0) 
        {
            a[x-1] = a[x] + 1; 
            q.push(x-1);
        }
        if(x * 2 < 20000 && a[x*2] == 0) 
        {
            a[x*2] = a[x] + 1; // câu lệnh này để đếm số bước thực hiện
            q.push(x*2);
        }
    }
    return a[t];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << bienDoi(a, b) << '\n';
    }
    return 0;
}