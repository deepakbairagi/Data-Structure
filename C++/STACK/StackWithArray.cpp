#include <iostream>
using namespace std;
struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
       cap=c;
       arr=new int[cap];
       top=-1;
    }
    int push(int x)
    {
        if(top==cap-1)
            return -1;
        top++;
        arr[top]=x;
    }
    int pop()
    {
        if(top==-1)
            return -1;
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if(top==-1)
            return -1;
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        return (top==-1);
    }
    void printStack()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<"\nElement"<<arr[i];
        }
    }
};
int main()
{
    Mystack s(5);
    cout<<s.size();
    cout<<s.push(3);
    cout<<s.push(7);
    cout<<s.pop();
    cout<<s.push(10);
    cout<<s.peek();
    cout<<s.size();
    cout<<s.isEmpty();
    s.printStack();
    
    return 0;
}