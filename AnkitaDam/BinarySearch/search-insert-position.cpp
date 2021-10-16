/*Time complexity: O(logn) where n is size of nums*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid,ans=nums.size();
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};