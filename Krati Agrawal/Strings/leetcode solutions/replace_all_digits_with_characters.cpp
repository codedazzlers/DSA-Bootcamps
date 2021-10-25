class Solution
{
public:
    string replaceDigits(string s)
    {
        for (int i = 1; i < s.size(); i = i + 2)  //here we will only check for odd indices
        {
            s[i] = s[i - 1] + s[i] - '0'; // any character c - '0' converts it into an integer value
        }
        return s;
    }
};