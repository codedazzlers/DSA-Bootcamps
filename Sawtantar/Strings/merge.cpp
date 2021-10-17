class Solution
{
public:
    string mergeAlternately(string wrd1, string wrd2)
    {
        string ans = "";
        int l1 = min(wrd1.length(), wrd2.length());
        for (int i = 0; i < l1; i++)
        {
            ans += wrd1[i];
            ans += wrd2[i];
        }
        if (wrd1.length() > wrd2.length())
        {
            for (int i = l1; i < wrd1.length(); i++)
            {
                ans += word1[i];
            }
        }
        else
        {
            for (int i = l1; i < wrd2.length(); i++)
            {
                ans += wrd2[i];
            }
        }
        return ans;
    }
};