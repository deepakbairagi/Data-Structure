#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
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
struct Node* reverseList(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
         prev=curr->prev;
         curr->prev=curr->next;
         curr->next=prev;
         curr=curr->prev;
    }
    return prev->prev;
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
    cout<<"List before reverse :"<<"\n";
    printList(head);
    head=reverseList(head);
    cout<<"List after reverse :"<<"\n";
    printList(head);
    return 0;
}
