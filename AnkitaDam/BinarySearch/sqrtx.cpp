/*Time complexity: O(logx)*/
class Solution {
public:
    int mySqrt(long int x) {
        long int i=1,j=x;
        long int mid,p,ans;
        while(i<=j){
            mid=i+(j-i)/2;
            p=mid*mid;
            if(p==x)
                return (int)mid;
            else if(p>x)
                j=mid-1;
            else{
                ans=mid;
                i=mid+1;
            }
        }
        return (int)ans;
    }
};