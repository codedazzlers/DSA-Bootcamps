//https://leetcode.com/problems/n-ary-tree-level-order-traversal/

//time complexity=O(number of parent nodes*number of nodes in a level)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        //did level order traversal using queue, stored all node values in a vector and returned it
        vector<vector<int>> answer;
        if (!root)
            return answer;
        queue<Node *> q;
        vector<int> v;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node *x = q.front();
                v.push_back(x->val);
                for (int j = 0; j < (x->children).size(); j++)
                {
                    q.push((x->children)[j]);
                }
                q.pop();
            }
            answer.push_back(v);
            v.clear();
        }
        return answer;
    }
};