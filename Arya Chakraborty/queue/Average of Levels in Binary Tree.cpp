//https://leetcode.com/problems/average-of-levels-in-binary-tree/

//time complexity=O(number of nodes*number of nodes in each level)

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
    vector<double> averageOfLevels(TreeNode *root)
    {
        //did level order traversal, stored all node values in a vector of the same level and iteratively stored the average in another container
        vector<double> answer;
        vector<vector<int>> ans;
        vector<int> v;
        if (!root)
            return answer;
        queue<TreeNode *> q;
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
            ans.push_back(v);
            v.clear();
        }
        for (int i = 0; i < ans.size(); i++)
        {
            double avg = 0.0;
            for (int j = 0; j < ans[i].size(); j++)
            {
                avg += ans[i][j];
            }
            avg = avg / ans[i].size();
            answer.push_back(avg);
        }
        return answer;
    }
};