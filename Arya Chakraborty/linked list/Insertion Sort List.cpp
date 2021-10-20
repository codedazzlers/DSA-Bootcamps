// https://leetcode.com/problems/insertion-sort-list/

// time complexity=O(n)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *insertionSortList(ListNode *head)
    {
        // we assume the first node of the list to be sorted and arrange the next elements by inserting them in the right order
        ListNode *i = head;
        while (i->next != NULL)
        {
            ListNode *j = i->next;
            ListNode *k = head;
            while (k != j)
            {
                if (k->val > j->val)
                {
                    // ListNode* temp=new ListNode(-1);
                    int temp = j->val;
                    j->val = k->val;
                    k->val = temp;
                }
                k = k->next;
            }
            i = i->next;
        }
        return head;
    }
};