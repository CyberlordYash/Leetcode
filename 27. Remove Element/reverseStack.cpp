#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> s)
{
    //base case
    if(s.empty()){return;}
    int save=s.top();
    s.pop();
    reverseStack(s);
    s.push(save);
}
int main()
{


}