class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty()  || st.top() != s[i])
                st.push(s[i]);
            
            else
                st.pop();
        }
        s.clear();
        while (!st.empty())
        {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
        
    }
};