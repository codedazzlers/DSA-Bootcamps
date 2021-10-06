class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int ans=0;
        for(int i=0; i<op.size(); i++)
        {
            if(op[i][0]=='+' || op[i][2]=='+')
                ans++;
            else
                ans--;
        }
        return ans;   
    }
};