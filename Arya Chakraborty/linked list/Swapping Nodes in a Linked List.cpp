// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
    ListNode *swapNodes(ListNode *head, int k)
    {
        // we traverse till the given node positions and swap the values
        int length = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            length++;
        }
        int a = k - 1;
        temp = head;
        while (a--)
        {
            temp = temp->next;
        }
        ListNode *temp1 = head;
        a = length - k;
        while (a--)
        {
            temp1 = temp1->next;
        }
        swap(temp->val, temp1->val);
        return head;
    }
};