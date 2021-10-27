//https://leetcode.com/problems/smallest-string-starting-from-leaf/

//time complexity=O(height of binary tree)

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
class Solution {
public:
    string s="";
    void solve(TreeNode* root,string a){
        //traverses every node of the tree and stores the string and when it reaches to the end, it reverses the string and recursively compares the string generated from the left and right subtrees, and updates the s string to the answer
        if(!root) return;
        a+=(char)(root->val+'a');
        if(!root->left&&!root->right){
            reverse(a.begin(),a.end());
            if(s=="" || a<s)s=a;
            return;
        }
        solve(root->left,a);
        solve(root->right,a);
    }
    string smallestFromLeaf(TreeNode* root) {
        solve(root,"");
        return s;
    }
};