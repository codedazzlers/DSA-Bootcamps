class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         ListNode *pre = nullptr, *tail = head;
        
        while(tail && tail->next){
            ListNode *nextN= tail->next;
            tail->next = nextN->next;
            nextN->next = tail;
            if(pre)
                pre->next = nextN;
            else
                head = nextN;
            pre = tail;
            tail = pre->next;
        }
        return head;
        
    }
};