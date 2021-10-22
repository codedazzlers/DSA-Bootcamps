// https://leetcode.com/problems/reverse-linked-list/

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
    ListNode *reverseList(ListNode *head)
    {
        // during every traversa, we change the link of a node from next to previous, and stop this if our current ppointer reaches the end
        ListNode *prevptr = NULL;
        ListNode *currptr = head;
        ListNode *nextptr;
        while (currptr != NULL)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        head = prevptr;
        return head;
    }
};