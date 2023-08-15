#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int x;
        vector<int> a;
        for(int i = 1; i <= n; ++i)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());

        int idx = n/2;
        if(n % 2 == 0) --idx;
        cout << a[idx] << '\n';   
    }
    return 0;
}