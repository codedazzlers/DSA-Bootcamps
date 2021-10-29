class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *node1 = new ListNode();
        ListNode *node2 = new ListNode();
        
        ListNode *ptr1 = node1;
        ListNode *ptr2 = node2;
        
        while(head){
            if(head->val < x){
                node1->next = head;
                node1 = node1->next;
            }
            else{
                node2->next = head;
                node2 = node2->next;
            }
            
            head = head->next;
        }
        
        node2->next = NULL;
        node1->next = ptr2->next;
        
        return ptr1->next;
        
    }
};