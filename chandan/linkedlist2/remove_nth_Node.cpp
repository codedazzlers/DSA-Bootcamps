class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* nodes[30];
        int t{0};
        
        while (head) {
            nodes[t++] = head;
            head = head->next;
        }
        
        int i = t-n;
        if (t == 1) {
            return nullptr;
        }
        
        if (i == 0)
            return nodes[1];
        
        if (i == t-1) 
            nodes[i-1]->next = nullptr;
        
        else if (i+1 < t)
            nodes[i-1]->next = nodes[i+1];
        
        return nodes[0];
        
    }
};