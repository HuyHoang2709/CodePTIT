#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    string s;
    int x;
    while(cin >> s)
    {
        if(s == "push")
        {
            cin >> x;
            cin.ignore();
            st.push(x);
        }
        else if(s == "pop") st.pop();
        else
        {
            vector<int> tmp;
            if(st.empty()) 
            {
                cout << "empty";
                continue;
            }
            while(!st.empty()) 
            {
                tmp.push_back(st.top());
                st.pop();
            }
            reverse(tmp.begin(), tmp.end());
            for(int i : tmp) 
            {
                cout << i << ' ';
                st.push(i);
            }
            cout << '\n';
        }
    }
    return 0;
}