class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int l = 1;
        vector<string> ans;
        int i = 0;
        while(i < target.size() && l <=n)
        {
            if(target[i] == l)
            {
                i++;
                l++;
                ans.push_back("Push");
            }
            
            else if(l < target[i])
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                l++;
            }
        }
        
        return ans;
    }
};