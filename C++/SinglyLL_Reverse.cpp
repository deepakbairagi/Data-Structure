#include <stdio.h>
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
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
int main()
{
    Node* head= new Node(10);
    Node* one= new Node(20);
    Node* two= new Node(30);
    Node* three= new Node(40);
    head->next=one;
    one->next=two;
    two->next=three;
    three->next=NULL;
    head=reverseList(head);
    printList(head);
    return 0;
}