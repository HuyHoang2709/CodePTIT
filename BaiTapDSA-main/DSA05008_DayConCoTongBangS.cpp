#include <bits/stdc++.h>

using namespace std;

bool dp(int a[], int n, int s)
{
    bool l[n + 1][s + 1];
    for (int i = 0; i <= n; ++i) l[i][0] = true;
    for (int i = 1; i <= s; ++i) l[0][i] = false;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= s; j++) 
        {
            if (j < a[i - 1]) l[i][j] = l[i - 1][j];
            if (j >= a[i - 1]) l[i][j] = l[i - 1][j] || l[i - 1][j - a[i - 1]];
        }
    }
    return l[n][s];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        
        if(dp(a, n, s)) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}