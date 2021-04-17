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
struct Node* segregate(Node* head)
{
    Node* eS=NULL;
    Node* eE=NULL;
    Node* oS=NULL;
    Node* oE=NULL;
    for(Node* curr=head;curr!=NULL;curr=curr->next)
    {
        int x = curr->data;
        if(x%2==0)
        {
            if(eS==NULL)
            {
                eS=curr;
                eE=eS;
            }
            else
            {
                eE->next=curr;
                eE=eE->next;
            }
        }
        else
        {
            if(oS==NULL)
            {
                oS=curr;
                oE=oS;
            }
            else
            {
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if(oE==NULL || eE==NULL)
        return head;
    eE->next=oS;
    oE->next=NULL;
    return eS;
}
int main()
{
    Node* head= new Node(11);
    Node* one= new Node(6);
    Node* two= new Node(7);
    Node* three= new Node(10);
    
    head->next=one;
    one->next=two;
    two->next=three;
    three->next=NULL;
    cout<<"List Before Segregation"<<"\n";
    printList(head);
    head=segregate(head);
    cout<<"List after Segregation"<<"\n";
    printList(head);
    return 0;
}