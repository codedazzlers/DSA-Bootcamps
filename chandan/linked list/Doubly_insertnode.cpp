DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *current = NULL;
    DoublyLinkedListNode *new_node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    new_node->data=data;
    new_node->next=NULL;
    new_node->prev=NULL;
    
  if (head == NULL )
  {
    head = new_node; 
  }
  else if(head->data >= new_node->data)
  {
    new_node->next = head;
    head->prev=new_node;
    head = new_node; 
  }
  else
  {
    
    current = head;
    while (current->next!=NULL && current->next->data < new_node->data)
    {
      current = current->next;
    }
      
      if(current->next!=NULL)
      {
          new_node->next = current->next;
          current->next->prev=new_node;
      }     
      current->next = new_node;
      new_node->prev=current;
      
  }       
    return head;
}