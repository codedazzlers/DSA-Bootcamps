/* Time complexity: O(logn) where n is size of arr*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high= arr.size()-1;
        int mid,ans=-1;
        while(low<high){
            mid=low+(high-low)/2;
            if (arr[mid] < arr[mid + 1]){
                ans = mid+1;
                low = mid + 1;
            }
            else{
                ans = mid;
                high = mid;
            }
        }
        return ans;
    }
};