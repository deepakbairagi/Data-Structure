#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        next=prev=NULL;
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
struct Node* insertAtEnd(Node* head,int data)
{
    Node* ptr=new Node(data);
    Node* curr=head;
    if(head==NULL)
    {
        ptr->next=head;
        head=ptr;
        return head;
    }
    while(curr->next!=NULL)
    {
       curr=curr->next; 
    }
    curr->next=ptr;
    ptr->prev=curr;
    return head;
}
int main()
{
    Node* head = NULL;
    head=insertAtEnd(head,11);
    head=insertAtEnd(head,33);
    head=insertAtEnd(head,55);
    printList(head);
    return 0;
}
