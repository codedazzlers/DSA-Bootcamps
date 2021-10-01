class Solution
{
public:
    char shift(char c, int x)
    {
        return c + x;
    }
    string replaceDigits(string s)
    {
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
                ans += s[i];
            else
                ans += shift(s[i - 1], (s[i] - '0'));
        }
        return ans;
    }
};