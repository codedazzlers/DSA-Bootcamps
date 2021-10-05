//https://leetcode.com/problems/sqrtx/submissions/
////time complexity=O(log n)

class Solution
{
public:
    long long int binarySearch(int n)
    {
        long long int start = 0, end = n, ans = 0;
        while (start <= end)
        {
            long long int mid = start + (end - start) / 2;
            if (mid * mid == n)
            {
                return mid;
            }
            else if (mid * mid < n)
            {
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
    int mySqrt(int x)
    {
        return binarySearch(x);
    }
};