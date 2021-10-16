/*Time Complexity: O(nlogn) where n is the size of nums*/
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int i=0,j=nums.size();
        int mid,count;
        while(i<=j){
            count=0;
            mid=i+(j-i)/2;
            for(int p=0;p<nums.size();p++){
                if(nums[p]>=mid){
                    count++;
                }
            }
            if(count==mid)
                return mid;
            else if(count < mid){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return -1;
    }
};