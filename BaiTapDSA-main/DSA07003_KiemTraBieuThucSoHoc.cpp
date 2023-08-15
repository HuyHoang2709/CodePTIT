#include <bits/stdc++.h>

using namespace std;

int check(string s)
{
    int n = s.length();
    stack<int> st;
    st.push(-1);
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')')
        {
            int j = st.top();
            st.pop();
            // Trường hợp cặp ngoặc chỉ bao quanh 1 số
            if(i - j == 2) return 1;
            // Trường hợp cặp ngoặc bao quanh một cặp ngoặc có sẵn
            if(s[j+1] == '(' && s[i-1] == ')') return 1;
        }
    }
    return 0;
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
        if(check(s)) cout << "Yes";
        else cout << "No";
        cout << '\n';
    }
    return 0;
}