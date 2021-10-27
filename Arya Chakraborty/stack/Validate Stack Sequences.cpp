//https://leetcode.com/problems/validate-stack-sequences/

//time complexity=O(n)

class Solution
{
    //we push the pushed elements and when the top of the stack is equal to the current popped element, we check, till where the elements are same in both containers and accordingly pop and increment the current position in the popped elements
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> st;
        int count = 0;
        for (int i = 0; i < pushed.size(); i++)
        {
            while (!st.empty() && st.top() == popped[count])
            {
                count++;
                st.pop();
            }
            st.push(pushed[i]);
        }
        for (int i = count; i < popped.size(); i++)
        {
            if (popped[i] != st.top())
                return false;
            else
            {
                st.pop();
            }
        }
        if (st.empty())
            return true;
        return true;
    }
};