#include <bits/stdc++.h>

using namespace std;

void xuLy(string s)
{
    stack<string> st;
    for(int i = s.length()-1; i >= 0; --i)
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string first = st.top();
            st.pop();
            string second = st.top();
            st.pop();
            string tmp = first + second + s[i];
            st.push(tmp);
        }
        else st.push(string(1, s[i]));
    }
    cout << st.top() << '\n';
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        xuLy(s);
    }
    return 0;
}