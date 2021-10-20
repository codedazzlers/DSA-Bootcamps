class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>+0;i--){
            int j=0;
            int k=i-1;
            while(j<k){
                if(nums[j]+nums[k]>nums[i]){
                    ans+=k-j;
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
        
    }
};