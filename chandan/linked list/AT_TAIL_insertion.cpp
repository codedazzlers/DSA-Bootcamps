#include <bits/stdc++.h>

using namespace std;


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode* ptr=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    
    ptr->data=data;
    struct SinglyLinkedListNode* p=head;
    
    while (p->next!=NULL) {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;


}

int main()