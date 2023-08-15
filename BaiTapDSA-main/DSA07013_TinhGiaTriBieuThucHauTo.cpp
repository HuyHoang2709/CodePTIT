#include <bits/stdc++.h>

using namespace std;

int tinhGiaTri(int a, int b, char c)
{
    if(c == '+') return a + b;
    else if(c == '-') return a - b;
    else if(c == '*') return a * b;
    return a / b;
}

int tinhHauTo(string s)
{
    stack<int> st;
    for(int i = 0; i < s.length(); ++i)
    {
        if(isdigit(s[i]))
        {
            int n = s[i] - '0';
            st.push(n);
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int x = tinhGiaTri(b, a, s[i]);
            st.push(x);
        }
    }
    return st.top();
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << tinhHauTo(s) << '\n';
    }
    return 0;
}