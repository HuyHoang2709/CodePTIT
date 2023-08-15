#include <bits/stdc++.h>

using namespace std;

int M[1005][1005];

int main() {
    memset(M, 0, sizeof(M));
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> M[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(M[i][j] == 1) cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}
