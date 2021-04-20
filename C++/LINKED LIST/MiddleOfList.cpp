#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        prev=next=NULL;
    }
};
void printList(struct Node* ptr)
{
    while(ptr!= NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int middle(Node* head)
{
    Node* ptr = head;
    if(head==NULL)
        return -1;
    if(head->next==NULL)
        return -1;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
int main()
{
    Node* head=new Node(10);
    Node* one=new Node(20);
    Node* two=new Node(30);
    Node* three=new Node(40);
    head->prev=NULL;
    head->next=one;
    one->prev=head;
    one->next=two;
    two->prev=one;
    two->next=three;
    three->prev=two;
    three->next=NULL;
    cout<<"List is :"<<"\n";
    printList(head);
    cout<<"Middle of list is : "<<middle(head);
    return 0;
}

