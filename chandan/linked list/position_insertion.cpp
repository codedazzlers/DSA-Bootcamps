SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    struct SinglyLinkedListNode* ptr =(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    struct SinglyLinkedListNode* p= head;
    int i=0;
    while (i != position-1) {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}