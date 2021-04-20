#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct MyStack{
    Node* head;
    int size;
    MyStack()
    {
        head==NULL;
        size=0;
    }
    void push(int x)
    {
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop()
    {
        if(head==NULL)
            return -1;
        int res=head->data;
        Node* temp=head;
        head=head->next;
        delete(temp);
        size--;
        return res;
    }
    int sizeofStack()
    {
        return size;
    }
    int peek()
    {
        if(head==NULL)
            return -1;
        return head->data;
    }
    bool isEmpty()
    {
        return (head==NULL);
    }
};
int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    //cout<<s.pop();
    cout<<s.sizeofStack();
    cout<<s.peek();
    cout<<s.isEmpty();
    
    return 0;
}