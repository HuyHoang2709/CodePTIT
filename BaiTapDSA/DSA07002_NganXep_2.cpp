#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    stack<int> st;
    string s;
    int x;
    while(t--)
    {
        cin >> s;
        if(s == "PUSH")
        {
            cin >> x;
            st.push(x);
        }
        else if(s == "PRINT")
        {
            if(st.empty()) cout << "NONE";
            else cout << st.top();
            cout << '\n';
        }
        else 
        {
            if(!st.empty()) st.pop();
        }
    }
    return 0;
}