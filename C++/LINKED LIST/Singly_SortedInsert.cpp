#include <bits/stdc++.h>
using namespace std;
struct Node {
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
struct Node* insertSorted(Node* head,int data)
{
    Node* temp = new Node(data);
    Node* ptr = head;
    if(head==NULL)
        return temp;
    if(data<head->data)
        temp->next=head;
        return temp;
    while(ptr->next!=NULL && ptr->next->data<data)
    {
        ptr = ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    return head;
}
int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"List before insertion :"<<"\n";
    printList(head);
    cout<<"List after insertion :"<<"\n";
    head=insertSorted(head,5);
    printList(head);
    return 0;
}

