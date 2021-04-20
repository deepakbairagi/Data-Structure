#include <bits/stdc++.h>
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
void printList(Node* head)
{
    struct Node* ptr = head;    
    while(ptr!=NULL)
    {
        cout << ptr->data<<"\n";
        ptr=ptr->next;
    }
}
int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head);
    return 0;
}
