class Solution {
public:
    string smallestSubsequence(string s) {
        map<char,int> m;
        int visited[26];
        for(int i=0;i<s.length();i++)
            visited[s[i]-'a']=i;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]>0)
                continue;
            while(!st.empty() && st.top()>=s[i] && visited[st.top()-'a']>i){
                m[st.top()]--;
                st.pop();
            }

            st.push(s[i]);
            m[s[i]]++;
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};