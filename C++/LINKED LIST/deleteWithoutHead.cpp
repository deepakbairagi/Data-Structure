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
void printList(Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}
void deleteNode(Node* ptr)
{
    Node* temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
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
    
    deleteNode(one);
    printList(head);
    return 0;
}