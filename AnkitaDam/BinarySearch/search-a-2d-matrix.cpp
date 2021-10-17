/*Time complexity: O(mlogn) where m is number of rows and n is number of colums in matrix*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(target<matrix[0][0])
            return false;
        for(int i=0;i<m;i++)
        {
            if(matrix[i][n-1]<target)
                continue;
            int p=0;
            int q=n-1;
            while(p<=q)
            {
                int mid=p+(q-p)/2;
                if(matrix[i][mid]==target)
                    return true;
                if(matrix[i][mid]>target)
                    q=mid-1;
                else
                    p=mid+1;
            }
        }
        return false;
    }
};