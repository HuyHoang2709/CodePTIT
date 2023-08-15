#include <bits/stdc++.h>

using namespace std;

int M[1005][1005];

int main() {
    memset(M, 0, sizeof(M));
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        while (ss >> token) {
            M[i][stoi(token)] = 1;
            M[stoi(token)][i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << M[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
