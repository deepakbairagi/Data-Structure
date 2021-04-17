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
struct Node* reverseList(Node* head)
{
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL)
    {
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int pallindrome(Node* head)
{
    if(head==NULL)
        return true;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* rev=reverseList(slow->next);
    Node* curr=head;
    while(rev!=NULL)
    {
        if(rev!=curr)
            return true;
        curr=curr->next;
        rev=rev->next;
    }
    return true;
}
int main()
{
    Node* head= new Node(10);
    Node* N1= new Node(20);
    Node* N2= new Node(30);
    Node* b= new Node(20);
    Node* b1= new Node(10);
    
    head->next=N1;
    N1->next=N2;
    N2->next=b;
    b->next=b1;
    b1->next=NULL;
    cout<<pallindrome(head);

    return 0;
}
