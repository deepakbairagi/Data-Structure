#include <bits/stdc++.h>
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
void printList(Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}
struct Node* insertEnd(Node* head,int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    Node* curr=head;
    while(curr->next!=NULL)
    {
    curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}
int main()
{
    Node* head = NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    printList(head);
    return 0;
}
