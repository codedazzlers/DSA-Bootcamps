// https://leetcode.com/problems/sort-list/

// time complexity=O(n*logn)

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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = NULL;
        return mid;
    }
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        ListNode *temp = new ListNode(-1);
        ListNode *currptr = temp;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val <= l2->val)
            {
                currptr->next = l1;
                l1 = l1->next;
            }
            else
            {
                currptr->next = l2;
                l2 = l2->next;
            }
            currptr = currptr->next;
        }
        currptr->next = l1 != NULL ? l1 : l2;
        return temp->next;
    }
    ListNode *sortList(ListNode *head)
    {
        // recursively break the array till the last and arrange the elements in another list in sorted order(merge sort)
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *mid = middleNode(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        return merge(left, right); // merge sort
    }
};