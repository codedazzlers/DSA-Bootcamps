class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* prev = res;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;
        while(t1!= NULL or t2!= NULL){
            ListNode* temp = new ListNode();
            int sum = 0;
            if(t1!= NULL){
                sum += t1->val;
                t1 = t1->next;
            }
            if(t2!=NULL){
                sum += t2->val;
                t2 = t2->next;
            }
            temp->val = (carry+sum)%10;
            prev->next = temp;
            prev = temp;
            carry = (carry+sum)/10;
        }
        if(carry>0){
            ListNode* temp = new ListNode();
            temp->val = carry;
            prev->next = temp;
        }
        return res->next;
        
    }
};