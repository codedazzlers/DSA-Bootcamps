/*Time complexity: O(log(num))*/
class Solution {
public:
    bool isPerfectSquare(long int num) {
        long int i=1,j=num;
        long int mid,p;
        while(i<=j){
            mid=i+(j-i)/2;
            p=mid*mid;
            if(p==num)
                return true;
            else if(p>num)
                j=mid-1;
            else
                i=mid+1;
        }
        return false;
    }
};