class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        int i;
        for(i = 0; i < s.size(); i++) {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};
