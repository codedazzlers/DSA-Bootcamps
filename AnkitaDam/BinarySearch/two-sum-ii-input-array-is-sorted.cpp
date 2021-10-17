/*Time complexity: O(n) where n is the size of numbers*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vect{ -1,-1 };
        int low=0,high=numbers.size()-1;
        while(low<high){
            if(numbers[low]+numbers[high]==target){
                vect[0]=low+1;
                vect[1]=high+1;
                return vect;
            }
            else if(numbers[low]+numbers[high]<target){
                low=low+1;
            }
            else{
                high=high-1;
            }
        }
        return vect;
    }
};