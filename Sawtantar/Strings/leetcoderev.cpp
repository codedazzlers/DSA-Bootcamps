class Solution
{
public:
    string revWords(string l)
    {
        string ans = "";
        int x = l.length();
        for (int i = x - 1; i >= 0; i--)
        {
            if (l[i] == ' ')
            {
                for (int j = i + 1; j < x; j++)
                {
                    ans += l[j];
                }
                ans += ' ';
                x = i;
            }
        }
        for (int i = 0; i < l.length(); i++)
        {
            if (l[i] == ' ')
                break;
            else
            {
                ans += l[i];
            }
        }
        return ans;
    }
};