#include <bits/stdc++.h>

using namespace std;

long long F[25];

long long qhd(string s)
{
    int n = s.length();
    F[0] = s[0] - '0';
    if (n == 1) return F[0];
    F[1] = F[0] * 11 + 2 * (s[1] - '0');
    for (int i = 2; i < n; ++i)
    {
        int c = s[i] - '0';
        F[i] = F[i - 1] + (F[i - 1] - F[i - 2]) * 10 + c * (i + 1);
    }
    return F[n - 1];
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << qhd(s) << '\n';
    }
    return 0;
}