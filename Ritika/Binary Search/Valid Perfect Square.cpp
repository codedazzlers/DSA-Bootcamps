//https://leetcode.com/problems/valid-perfect-square/
//time complexity=O(1)

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long int a = sqrt(num);
        a = pow(a, 2);
        if (a == num)
            return true;
        else
            return false;
    }
};