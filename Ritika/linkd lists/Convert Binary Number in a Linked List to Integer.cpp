// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int listLength(ListNode *head)
    {
        ListNode *temp = head;
        int ans = 0;
        while (temp != NULL)
        {
            ans++;
            temp = temp->next;
        }
        return ans;
    }
    int getDecimalValue(ListNode *head)
    {
        // we find the length of the list and use the x*pow(2,nth position) formula of binary to decimal conversion normally
        ListNode *temp = head;
        int ans = 0;
        int length = listLength(head) - 1;
        while (temp != NULL)
        {
            ans += (temp->val) * pow(2, length--);
            temp = temp->next;
        }
        return ans;
    }
};