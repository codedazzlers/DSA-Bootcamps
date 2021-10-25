class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string ans = s;
        for (int i = 0; i < s.size(); i++)
        {
            ans[indices[i]] = s[i]; // i.e, for given example 1 in ques;
                                    //---> ans[indices[0]]= s[0] ---> ans[4]=s[0] ---> l = s[0]
        }
        return ans;
    }
};