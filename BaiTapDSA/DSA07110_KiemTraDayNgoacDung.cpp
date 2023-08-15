#include <bits/stdc++.h>

using namespace std;

int check(string s)
{
    stack<char> st;
    for(auto i : s)
    {
        if(i == '(' || i == '[' || i == '{') st.push(i);
        else 
        {
            // Rỗng khi có cặp ngoặc đóng
            if(st.empty()) return 0;
            // Không rỗng khi có cặp ngoặc đóng
            char in = st.top(), out = i;
            if(in == '(' && out == ')') st.pop();
            else if(in == '[' && out == ']') st.pop();
            else if(in == '{' && out == '}') st.pop();
        }
    }
    return st.empty();
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
        if(check(s)) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}