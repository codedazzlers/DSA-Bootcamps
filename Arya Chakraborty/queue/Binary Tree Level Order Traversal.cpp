//https://leetcode.com/problems/binary-tree-level-order-traversal/

//time complexity=O(number of parent nodes*number of nodes in each level)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        //did level order traversal using queue, stored all node values in a vector and returned it
        vector<vector<int>> answer;
        if (!root)
            return answer;
        queue<TreeNode *> q;
        vector<int> v;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *x = q.front();
                v.push_back(x->val);
                if (x->left)
                    q.push(x->left);
                if (x->right)
                    q.push(x->right);
                q.pop();
            }
            answer.push_back(v);
            v.clear();
        }
        return answer;
    }
};