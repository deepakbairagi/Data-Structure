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
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node* insertAtIndex(struct Node* head,int data,int index)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    int i=0;
    struct Node* p=head;
    while(i<index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
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
    printf("Circular linkedList before insertion:\n");
    linkedList(head);
    head=insertAtIndex(head,55,0);
    printf("Circular linkedList after insertion:\n");
    linkedList(head);
    return 0;
}