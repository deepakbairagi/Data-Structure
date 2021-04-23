#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    cout<<s.size()<<"\n";
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top()<<"\n";
    cout<<s.size()<<"\n";
    cout<<s.empty();
    return 0;
}