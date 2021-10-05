class Solution
{
public:
    int isSubstring(string s, string s1)
    {
        int length2 = s1.length();
        int i, j;
        for (i = 0, j = 0; s[i] != '\0' && s1[j] != '\0'; i++)
        {
            if (s[i] == s1[j])
                j++;
            else
                j = 0;
        }
        if (j == length2)
            return 1;
        else
            return 0;
    }
    int numOfStrings(vector<string> &patterns, string word)
    {
        int ans = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (isSubstring(word, patterns[i]) == 1)
                ans++;
        }
        return ans;
    }
};