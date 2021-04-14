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
struct Node* insertAtIndex(Node* head,int pos,int x)
{
    Node* temp=new Node(x);
    Node* ptr=head;
    int i=0;
    while(i!=pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    return head;
    
}
int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head=insertAtIndex(head,2,50);
    printList(head);
    return 0;
}
