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
struct Node* insertBegin(Node* head,int x)
{
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
}
int main()
{
    Node* head = NULL;
    head=insertBegin(head,30);
    head=insertBegin(head,20);
    printList(head);
    return 0;
}
