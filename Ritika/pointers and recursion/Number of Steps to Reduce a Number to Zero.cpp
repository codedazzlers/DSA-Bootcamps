//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

//time complexity=O(n/2)

class Solution
{
public:
    int numberOfSteps(int num)
    {
        if (num == 0)
            return 0;
        else if (num & 1)
            return 1 + numberOfSteps(num - 1);
        return 1 + numberOfSteps(num / 2);
    }
};