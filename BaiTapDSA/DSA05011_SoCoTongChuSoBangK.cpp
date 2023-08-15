#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;
long long F[105][50005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        memset(F, 0, sizeof(F));
        for (int i = 1; i < 10; ++i) F[1][i] = 1;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= x; ++j)
            {
                for (int k = 0; k <= 9; ++k)
                {
                    if (k <= j)
                        F[i][j] = (F[i][j] % mod + F[i - 1][j - k] % mod) % mod;
                    else break;
                }
            }
        }
        cout << F[n][x] << '\n';
    }
    return 0;
}