#include <bits/stdc++.h>
using namespace std;
bool matching(char a,char b)
{
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}
bool isBalanced(string str,int size)
{
    char* arr=new char[size];
    int top=-1;
    
    for(char x: str)
    {
        
        if(x=='(' || x=='{' || x=='[')
        {
            top++;
            arr[top]=x;
        }
        else
        {
            if(top==-1)
            {
                return false;
            }
            if(matching(arr[top],x)==false)
            {
                return false;
            }
            else
            {
                top--;
            }
        }
    }
    return top==-1;
    
}

int main()
{
    string s="";
    cout<<"Plz enter the input:: ";
    cin>>s;
    int l=(s.length())/2;
    cout<<isBalanced(s,l);
    return 0;
}