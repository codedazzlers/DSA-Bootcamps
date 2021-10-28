SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* first, SinglyLinkedListNode* second) {
    SinglyLinkedListNode *third=NULL;
        SinglyLinkedListNode *last=NULL;
        if(first==NULL)
        {
            return second;  
        }
        if(second==NULL)
        {
            return first;
        }
        if(first==NULL && second==NULL)
        {
            return NULL;
        }
        if(first->data<=second->data)
        {
            third=last=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
            third=last=second;
            second=second->next;
            last->next=NULL;
        }
        while(first!=NULL && second!=NULL)
        {
            if(first->data<=second->data)
            {
                last->next=first;
                last=first;
                first=first->next;
                last->next=NULL;
            }
            else
            {
                last->next=second;
                last=second;
                second=second->next;
                last->next=NULL;
            }
        }
        if(first!=NULL)
        {
            last->next=first;
        }
        if(second!=NULL)
        {
            last->next=second;
        }
        return third;


}