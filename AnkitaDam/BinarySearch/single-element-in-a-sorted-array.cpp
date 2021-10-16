/*Time complexity: O(log(n/2))==O(logn)*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int j=(nums.size()/2)-1;
        int i=0,mid,ans=nums.size()-1;
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[mid*2]!=nums[mid*2+1]){
                ans=mid*2;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return nums[ans];
    }
};