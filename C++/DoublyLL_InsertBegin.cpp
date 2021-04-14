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
struct Node* insertBegin(Node* head,int data)
{
    Node* ptr=new Node(data);
    ptr->next=head;
    head=ptr;
    if(ptr!=NULL)
    {
        head->prev=ptr;
    }
    return ptr;
}
int main()
{
    Node* head = NULL;
    head=insertBegin(head,11);
    head=insertBegin(head,33);
    head=insertBegin(head,55);
    printList(head);
    return 0;
}
