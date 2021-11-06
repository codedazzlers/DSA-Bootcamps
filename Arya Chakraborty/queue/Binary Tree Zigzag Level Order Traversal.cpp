//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

//time complexity=O(number of parent nodes*number of nodes in a level)

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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        //did level order traversal using queue, stored all node values in a vector and returned it in zigzag order
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
        vector<vector<int>> answerf;
        for (int i = 0; i < answer.size(); i++)
        {
            if (i & 1)
            { //odd
                vector<int> z;
                for (int j = answer[i].size() - 1; j >= 0; j--)
                {
                    z.push_back(answer[i][j]);
                }
                answerf.push_back(z);
            }
            else
            { //even
                answerf.push_back(answer[i]);
            }
        }
        return answerf;
    }
};