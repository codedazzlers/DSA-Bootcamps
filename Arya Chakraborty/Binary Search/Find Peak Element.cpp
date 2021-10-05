//https://leetcode.com/problems/find-peak-element/submissions/
//time complexity=O(n)

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int ans = -1;
        if (nums.size() == 1)
            ans = 0;
        else if (nums.size() == 2)
            ans = (nums[0] > nums[1]) ? 0 : 1;
        else
        {
            if (nums[0] > nums[1])
                ans = 0;
            if (nums[nums.size() - 1] > nums[nums.size() - 2])
                ans = nums.size() - 1;
            for (int i = 1; i < nums.size() - 1; i++)
            {
                if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                    ans = i;
            }
        }
        return ans;
    }
};