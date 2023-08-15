#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        
        int cnt = 0;
        for(auto i : s)
        {
            if(i == '(') st.push(i);
            else
            {
                if(st.empty())
                {
                    ++cnt;
                    st.push(i);
                }
                else st.pop();
            }
        }
        cnt += st.size() / 2;
        cout << cnt << '\n';
    }
    return 0;
}