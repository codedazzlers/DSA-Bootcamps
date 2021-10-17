//https://leetcode.com/problems/power-of-four/

//time complexity=O(log4n)

class Solution
{
public:
    bool isrealpow(int n, int rem)
    {
        if (rem != 0)
            return false;
        else if (n == 1 && rem == 0)
            return true;
        return isrealpow(n / 4, n % 4);
    }
    bool isPowerOfFour(int n)
    {
        if (n == 0)
            return false;
        else if (n == 1)
            return true;
        return isrealpow(n, n % 4);
    }
};