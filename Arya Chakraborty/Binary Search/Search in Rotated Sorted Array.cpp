//https://leetcode.com/problems/search-in-rotated-sorted-array/
//time complexity=O(log n)

class Solution
{
public:
    int binarysearch(vector<int> &nums, int key, int s, int e)
    {
        int start = s, end = e;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == key)
            {
                return mid;
            }
            else if (nums[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        if (nums.size() == 1 && target != nums[0])
            return -1;
        else if (nums.size() == 1 && target == nums[0])
            return 0;
        int start = 0, end = nums.size() - 1, peak = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if ((mid < end) && (nums[mid + 1] < nums[mid]))
            {
                peak = mid;
                break;
            }
            else if ((mid > start) && (nums[mid - 1] > nums[mid]))
            {
                peak = mid - 1;
                break;
            }
            else if (nums[start] >= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        if (peak == -1)
        {
            return binarysearch(nums, target, 0, nums.size() - 1);
        }
        else if (nums[peak] == target)
        {
            return peak;
        }
        else if (target >= nums[0])
        {
            return binarysearch(nums, target, 0, peak - 1);
        }
        else
        {
            return binarysearch(nums, target, peak + 1, nums.size() - 1);
        }
    }
};