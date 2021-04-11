#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linkedList(struct Node* head)
{
    struct Node* ptr=head;
    do
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node* deleteFirst(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=head->next;
    while(p->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    head = q->next;
    p->next = q->next;
    free(q);
    return head;
}
int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data=10;
    head->next=first;
    
    first->data=20;
    first->next=second;
    
    second->data=30;
    second->next=third;
    
    third->data=40;
    third->next=head;
    printf("Circular linkedList before deletion: \n");
    linkedList(head);
    head=deleteFirst(head);
    printf("Circular linkedList after deletion: \n");
    linkedList(head);
    return 0;
}
