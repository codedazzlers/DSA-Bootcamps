/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

/*Time complexity: O(logn)*/
class Solution {
public:
    int guessNumber(int n) {
        int i=1,j=n;
        int mid=-1;
        while(i<=j){
            mid=i+(j-i)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
                i=mid+1;
            else
                j=mid-1;
        }
        return mid;
    }
};