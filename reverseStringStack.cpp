#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t = "yash sachan";
    stack<char> s;
    int size = t.size();
    for (int i = 0; i < size; i++)
    {
        s.push(t[i]);
    }
    string a;
    while (!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    cout << a << endl;
}