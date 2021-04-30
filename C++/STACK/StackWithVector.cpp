#include <iostream>
#include <vector>
using namespace std;
struct Mystack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
    
};
int main()
{
    Mystack s;
    cout<<s.size()<<"\n";
    s.push(1);
    s.push(2);
    cout<<s.pop()<<"\n";
    s.push(3);
    cout<<s.peek()<<"\n";
    cout<<s.size()<<"\n";
    cout<<s.isEmpty();

    
    return 0;
}
