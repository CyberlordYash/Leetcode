#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s, int num, int count)
{
    // base case
    if (count == s.size())
    {
        s.push(num);
        return;
    }

    // reach to end case while saving prev pop element
    int save = s.top();
    s.pop();
    insert(s, num, ++count);
    s.push(save);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    insert(s, 9, 5);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}