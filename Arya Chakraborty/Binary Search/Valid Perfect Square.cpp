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