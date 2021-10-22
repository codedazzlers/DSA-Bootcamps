//https://leetcode.com/problems/linked-list-cycle/

//time complexity=O(n); n being the number of nodes in the linked list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(slow==NULL){
            return false;
        }
        else if(slow->next==NULL){//loop present
            return false;
        }
        while(fast!=NULL && fast->next!=NULL){//when there's an end to the list...we stop our search
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};