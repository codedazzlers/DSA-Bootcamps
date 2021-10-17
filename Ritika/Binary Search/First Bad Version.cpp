//https://leetcode.com/problems/first-bad-version/
//time complexity=O(log n)

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 1, end = n, mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (isBadVersion(mid) == true)
                end = mid - 1;
            else if (isBadVersion(mid) == false)
                start = mid + 1;
        }
        return start;
    }
};