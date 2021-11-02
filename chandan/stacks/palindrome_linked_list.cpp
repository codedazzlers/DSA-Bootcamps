class Solution {
public:
     ListNode* rev(ListNode*node){
       ListNode*prev=NULL;
        ListNode*curr=node;
         ListNode*nex=NULL;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
           
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head== NULL || head->next==NULL)
            return true;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
       slow->next=rev(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val)
                return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};