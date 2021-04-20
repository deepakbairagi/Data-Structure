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
void deleteDuplicate(Node* head)
{
    Node* curr = head;
    
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node* temp = curr->next;
            curr->next = temp->next;
            delete(temp);
        }
        else
            curr=curr->next;
    }
}
int main()
{
    Node* head=new Node(10);
    Node* one=new Node(20);
    Node* two=new Node(30);
    Node* three=new Node(40);
    Node* four=new Node(40);

    head->next=one;
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;
    cout<<"List is :"<<"\n";
    printList(head);
    cout<<"After Removing duplicates : "<<"\n";
    deleteDuplicate(head);
    printList(head);
    return 0;
}