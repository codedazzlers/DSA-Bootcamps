class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b)
    {
        if (a == NULL)
            return (b);
        else if (b == NULL)
            return (a); 
        if (a->val <= b->val) 
        {        
            a->next = merge(a->next, b);
            return a;
        }
        else 
        {
            b->next = merge(a, b->next);
            return b;
        }
    }
    
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* slow=head, *fast=head;
        while(fast && fast->next  && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* newnode=slow->next;
        slow->next = nullptr;       
       
        return merge(sortList(head), sortList(newnode));
        
    }
};