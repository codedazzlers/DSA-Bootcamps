class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head)
            return;
        ListNode *firstListStart=head;        
        ListNode *secondListStart=findListMid(head);
        cout<<secondListStart->val<<endl;
        ListNode *secondListStartReversed=reverseList(secondListStart);
        cout<<secondListStartReversed->val<<endl;
        
        
        while(secondListStartReversed->next){
            ListNode *tmp1=firstListStart->next;
            firstListStart->next=secondListStartReversed;
            firstListStart=tmp1;
            //second
            
            
            ListNode *tmp2=secondListStartReversed->next;
            secondListStartReversed->next=tmp1;            
            secondListStartReversed=tmp2; 
        }     
        
    }
    
    ListNode* findListMid(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head){
        ListNode *prev=NULL;
        ListNode *cur=head;
        ListNode *next=NULL;
        
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
};