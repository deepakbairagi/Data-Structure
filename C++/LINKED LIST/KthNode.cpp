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
int printNthNode(Node* head,int index)
{
    if(head==NULL)
        return -1;
    Node* first = head;
    Node* second = head;
    for(int i=0;i<index;i++)
    {
        first=first->next;
    }
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    return second->data;
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
    cout<<"kth node of list is : "<<printNthNode(head,1);
    return 0;
}