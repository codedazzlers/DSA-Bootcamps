/*Time complexity: O(logn)*/
class Solution {
public:
    int arrangeCoins(int n) {
        long int i=1,j=n;
        long int mid,ans;
        while(i<=j){
            mid=i+(j-i)/2;
            long int p = (mid*(mid+1))/2;
            if(p == n)
                return (int)mid;
            else if(p > n)
                j=mid-1;
            else{
                ans=mid;
                i=mid+1;
            }
        }
        return (int)ans;
    }
};