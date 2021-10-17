//https://leetcode.com/problems/arranging-coins/
//time complexity=O(log n)
class Solution
{
public:
    long long int arrangeCoins(int n)
    {
        long long int start = 1, end = n, mid, ans = 0;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (mid * (mid + 1) / 2 < n)
            {
                ans = mid;
                start = mid + 1;
            }
            else if (mid * (mid + 1) / 2 > n)
                end = mid - 1;
            else
                return mid;
        }
        return ans;
    }
};