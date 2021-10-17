/*Overall time complexity: O(nlogn)*/
class Solution {
public:
    bool check(vector<int>& weights, int days, int mid){
        int c=0;
        for(int i:weights){
            if(i>mid)
                return false;
            else if(c+i <= mid)
                c+=i;
            else{
                c=i;
                days=days-1;
            }
        }
        if(days >= 1)
            return true;
        else
            return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int j=INT_MAX,i=1,ans;
        while(i <= j){
            int mid=i+(j-i)/2;
            if(check(weights, days, mid)){
                ans = mid;
                j = mid-1;
            } 
            else
                i = mid+1;
        }
        return ans;
    }
};