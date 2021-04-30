#include <iostream>
using namespace std;
struct twoStack{
    int *arr,cap,top1,top2;
    twoStack(int n)
    {
        cap=n;
        top1=-1;
        top2=cap;
        arr=new int[cap];
    }
    void push1(int item)
    {
        if(top1<top2-1)
        {
            cout<<"Element Pushed\n";
            top1++;
            arr[top1]=item;
        }
        else
        {
            cout<<"Overflow";
            //exit(1);
        }
    }
    void push2(int item)
    {
        if(top1<top2-1)
        {
            cout<<"Element Pushed\n";
            top2--;
            arr[top2]=item;
        }
        else
        {
            cout<<"Overflow";
            //exit(1);
        }
    }
    int pop1()
    {
        if(top1>=0)
        {
            int x=arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout<<"\nUnderflow";
            exit(1);
        }
            
    }
    int pop2()
    {
        if(top2<cap)
        {
            int x=arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout<<"\nUnderflow";
            exit(1);
        }
    }
};
int main()
{
    twoStack s(5);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    cout<<s.pop2();
    cout<<s.pop2();
    cout<<s.pop2();
}