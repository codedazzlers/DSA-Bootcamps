class Solution {
public:
    int size=0;
    ListNode* root;
    
    Solution(ListNode* head) {
         root=head;
        ListNode *ptr=head;
        while(ptr!=NULL) {
            ptr=ptr->next;
            size++;
        }
        
    }
    
    int getRandom() {
        int t=rand()%size;
         ListNode *ptr=root;
        while(t--) {
            ptr=ptr->next;
            
        }
        return ptr->val;
        
    }
};
