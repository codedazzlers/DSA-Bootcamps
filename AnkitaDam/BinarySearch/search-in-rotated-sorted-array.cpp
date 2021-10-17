/*Time complexity: O(logn) where n is size of nums*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size() -1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[i]<=nums[mid])
            {
                if(target>=nums[i] && target<=nums[mid])
                    j=mid-1;
                else 
                    i=mid+1;
            }
            else{
                if(target>=nums[mid] && target<=nums[j])
                    i=mid+1;
                else
                    j=mid-1;
            }
        }
        return -1;
    }
};