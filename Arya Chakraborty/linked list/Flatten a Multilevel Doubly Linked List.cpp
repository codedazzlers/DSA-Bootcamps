// https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

// time complexity=O(n*m); m being the child list of every nth parent list

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
public:
    Node *flatten(Node *head)
    {
        // we traverse the parent list and when there's a child, we change the link of child to double link and again traverse till the end of the child list and connect it with the next node of the parent and continue this process till no child remains in the total list.
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->child != NULL)
            {
                Node *temp = ptr->next;
                ptr->next = ptr->child;
                ptr->next->prev = ptr;
                ptr->child = NULL;
                Node *x = ptr->next;
                while (x->next != NULL)
                {
                    x = x->next;
                }
                x->next = temp;
                if (temp != NULL)
                {
                    temp->prev = x;
                }
            }
            ptr = ptr->next;
        }
        return head;
    }
};