// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode *deleteDuplicates(ListNode *head)
    {
        // we delete the node if consecutive node values are equal otherwise we go forward till the end
        ListNode *tmp = head;
        if (head == NULL)
        {
            return head;
        }
        while (tmp->next != NULL)
        {
            if (tmp->next->val == tmp->val)
            {
                ListNode *q = tmp->next;
                tmp->next = q->next;
                delete q;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};