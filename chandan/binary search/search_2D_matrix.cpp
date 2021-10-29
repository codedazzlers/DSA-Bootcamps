class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res=false;

        for(vector<int> vec: matrix){
            if(target >= vec[0]){
                if(binary_search(vec.begin(), vec.end(), target))
                    res=true;
            }
        }

        return res;
    }
};