#include <bits/stdc++.h>
using namespace std;
void check(string s)
{
    int size = s.size();
    stack<char> st;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == '(' && s[i] == ')')
                st.pop();
            else if (st.top() == '{' && s[i] == '}')
                st.pop();
            else if (st.top() == '[' && s[i] == ']')
                st.pop();
        }
    }
    if (st.empty())
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
}
int main()
{
    string s;
    cout << "Enter equation to check Paranthesesis:";
    cin >> s;
    check(s);
}