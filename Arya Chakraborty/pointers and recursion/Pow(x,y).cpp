//https://leetcode.com/problems/powx-n/

//time complexity=O(y)

class Solution
{
public:
    double calculate(double x, int y)
    {
        if (y < 0)
            return (1 / x) * calculate(x, y + 1);
        if (y == 0)
            return 1;
        else
            return x * calculate(x, y - 1);
    }
    double myPow(double x, int y)
    {
        double ans = calculate(x, y);
        return ans;
    }
};