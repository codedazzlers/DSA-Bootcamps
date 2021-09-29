class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";
        int x = s.length();
        for (int i = x - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                for (int j = i + 1; j < x; j++)
                {
                    ans += s[j];
                }
                ans += ' ';
                x = i;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                break;
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};