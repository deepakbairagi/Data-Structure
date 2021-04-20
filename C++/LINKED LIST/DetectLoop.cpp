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

bool isloop(Node* head)
{
    Node* temp=new Node(1);
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        Node* nxt=curr->next;
        curr->next=temp;
        curr=nxt;
    }
    return false;
}
int main()
{
    Node* head= new Node(10);
    Node* one= new Node(20);
    Node* two= new Node(30);
    Node* three= new Node(40);
    
    head->next=one;
    one->next=two;
    two->next=three;
    three->next=one;
    
    cout<<isloop(head);
    //printList(head);
    return 0;
}