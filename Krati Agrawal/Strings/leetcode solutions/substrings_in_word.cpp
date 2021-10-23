class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int count = 0;
        for (auto i : patterns)
        {
            if (word.find(i) != string::npos)
            {
                count++;
            }
        }
        return count;
    }
};