struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

//Function to clone a linked list with next and random pointer.
Node *copyList(Node *head) {
    // Your code here
    Node* curr=head;
    Node* next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=next;
        curr=next;
    }
    for(Node* curr=head;curr!=NULL;curr=curr->next->next)
    {
        curr->next->arb=(curr->arb!=NULL)?curr->arb->next:NULL;
    }
    Node* original=head;
    Node* copy=head->next;
    Node* temp=copy;
    while(original&&copy)
    {
        //original->next =original->next? original->next->next : original->next;
        //copy->next = copy->next?copy->next->next:copy->next;
        if(original->next && copy->next)
            original->next=original->next->next;
            copy->next=copy->next->next;
        else
            original->next=original->next;
            copy->next=copy->next;
        original = original->next;
        copy = copy->next;
    }
    return temp;
}
