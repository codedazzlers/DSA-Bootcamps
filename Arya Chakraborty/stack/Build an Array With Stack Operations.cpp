//https://leetcode.com/problems/build-an-array-with-stack-operations/

//time complexity=O(n)

class Solution
{
    //where the element in the list {1,2,...,n} is equal to the target, we push that into the stack else we push and pop ensuring that the element not required, never enters the stack
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        stack<int> arr;
        vector<string> ans;
        int index = 0;
        for (int i = 1; i <= n; i++)
        {
            if (index == target.size())
                break;
            if (target[index] == i)
            {
                ans.push_back("Push");
                index++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};