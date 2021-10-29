#include <bits/stdc++.h>

using namespace std;



SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode* ptr =(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    
    ptr->data=data;
    ptr->next=head;
    return ptr;


}

int main()