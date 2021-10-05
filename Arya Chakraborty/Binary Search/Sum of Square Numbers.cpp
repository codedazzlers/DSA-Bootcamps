//https://leetcode.com/problems/sum-of-square-numbers/submissions/
//time complexity=O(sqrt c)

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long int i = 0;
        while (i * i <= c)
        {
            long long int s1 = i * i;
            long long int s2 = c - s1;
            long long int s_2 = sqrt(s2);
            long long int check = pow(s_2, 2);
            if (check == s2)
                return true;
            i++;
        }
        return false;
    }
};