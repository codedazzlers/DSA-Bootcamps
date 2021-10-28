SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
     SinglyLinkedListNode* current = head;
        SinglyLinkedListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;

}

