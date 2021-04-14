#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
void linkedList(struct Node* head)
{
    struct Node* ptr=head;
    while(ptr!=NULL)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
        if(ptr->next==NULL)
        {
            printf("Element is : %d\n",ptr->data);
            while(ptr!=NULL)
            {
                printf("Element is :- %d\n",ptr->data);
                ptr=ptr->prev;  
            }
        }
    }
    
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data=10;
    head->prev=NULL;
    head->next=first;
    
    first->data=20;
    first->prev=head;
    first->next=second;
    
    second->data=30;
    second->prev=first;
    second->next=third;
    
    third->data=40;
    third->prev=second;
    third->next=NULL;
    linkedList(head);
    return 0;
}