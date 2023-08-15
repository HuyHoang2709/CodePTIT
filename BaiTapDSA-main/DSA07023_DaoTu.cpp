#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);

        int pos = s.length() - 1;
        for(int i = s.length() - 1; i >= 0; --i)
        {
            if(s[i] == ' ') 
            {
                for(int j = i+1; j <= pos; ++j) cout << s[j];
                cout << ' ';
                pos = i - 1;
            }
        }
        for(int i = 0; i <= pos; ++i) cout << s[i];
        cout << '\n';
    }
    return 0;
}