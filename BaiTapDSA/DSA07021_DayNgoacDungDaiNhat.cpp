#include <bits/stdc++.h>

using namespace std;

int tinh(string s)
{
    int n = s.length();
    int ans = 0;
    stack<int> st;
    st.push(-1);
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == '(') st.push(i);
        else
        {
            st.pop();
            if(!st.empty())
            {
                int j = st.top();
                ans = max(ans, i - j);
            }
            else st.push(i);
        } 
    }
    return ans;
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
        cout << tinh(s) << '\n';
    }
    return 0;
}