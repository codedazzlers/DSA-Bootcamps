class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int l=INT_MAX;
        int i(0),j(0);
        int s(0);
        while(i<=j && j<nums.size()){
            if(s<k){
                s+=nums[j];
                j++;
            }while(s>=k){
                l=min(l,j-i);
                s-=nums[i];
                i++;
            }
        }
        return (l==INT_MAX)?0:l;
    }
};