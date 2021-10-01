class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int l1 = min(word1.length(), word2.length());
        for (int i = 0; i < l1; i++)
        {
            ans += word1[i];
            ans += word2[i];
        }
        if (word1.length() > word2.length())
        {
            for (int i = l1; i < word1.length(); i++)
            {
                ans += word1[i];
            }
        }
        else
        {
            for (int i = l1; i < word2.length(); i++)
            {
                ans += word2[i];
            }
        }
        return ans;
    }
};