//https://leetcode.com/problems/valid-parentheses/

//time complexity=O(s.length())

class Solution
{
    //we pushed the opening brackets, and where there is a valid closing bracket, we pop two elements till we wmpty the stack
public:
    bool isValid(string s)
    {
        stack<char> st;
        int i = 0;
        while (i < s.length())
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            {
                st.push(s[i]);
            }
            if (s[i] == ']' || s[i] == '}' || s[i] == ')')
            {
                if (st.empty())
                    return false;
                else if (s[i] == ']' && st.top() != '[')
                    return false;
                else if (s[i] == '}' && st.top() != '{')
                    return false;
                else if (s[i] == ')' && st.top() != '(')
                    return false;
                else
                    st.pop();
            }
            i++;
        }
        if (st.empty())
            return true;
        return false;
    }
};