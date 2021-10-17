//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
//time complexity=O(log n)

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1, peak = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if ((mid < end) && (nums[mid] > nums[mid + 1]))
            {
                peak = mid;
                break;
            }
            else if ((mid > start) && (nums[mid - 1] > nums[mid]))
            {
                peak = mid - 1;
                break;
            }
            else if (nums[start] > nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        return nums[peak + 1];
    }
};