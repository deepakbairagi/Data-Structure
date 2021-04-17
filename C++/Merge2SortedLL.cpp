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
struct Node* combineWithSort(Node* a,Node* b)
{
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    Node* head=NULL;
    Node* tail=NULL;
    if(a->data<=b->data)
    {
        head=tail=a;
        a=a->next;
    }
    else
    {
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL)
    {
        if(a->data<=b->data)
        {
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else
        {
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)
    {
        tail->next=b;
    }
    else
    {
        tail->next=a;
    }
    return head;
}
int main()
{
    Node* a= new Node(10);
    Node* N1= new Node(20);
    Node* N2= new Node(30);
    Node* b= new Node(5);
    Node* b1= new Node(25);
    Node* b2= new Node(35);
    
    a->next=N1;
    N1->next=N2;
    N2->next=NULL;
    b->next=b1;
    b1->next=b2;
    b2->next=NULL;
    cout<<"List Before combining"<<"\n";
    printList(a);
    printList(b);
    a=combineWithSort(a,b);
    cout<<"List after combining"<<"\n";
    printList(a);
    return 0;
}
