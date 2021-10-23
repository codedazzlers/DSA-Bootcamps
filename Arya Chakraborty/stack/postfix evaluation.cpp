//postfix evaluation using stack

//time complexity=O(s.length())

#include <bits/stdc++.h>
using namespace std;
int evaluate(string s)
{
    //we push the operators, while travelling from left to right(associativity) and during every operation, we pop 2 elements from the stack and push the solved result in the stack again, and finally we are left with 1 element for a valid postfix expression
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            if (s[i] == '+')
            {
                st.push(op2 + op1);
            }
            else if (s[i] == '-')
            {
                st.push(op1 - op2);
            }
            else if (s[i] == '*')
            {
                st.push(op2 * op1);
            }
            else if (s[i] == '/')
            {
                st.push(op1 / op2);
            }
            else if (s[i] == '^')
            {
                st.push((int)pow(op1, op2));
            }
        }
    }
    return st.top();
}
int main()
{
    string s;
    cin >> s;
    cout << evaluate(s);
    return 0;
}
