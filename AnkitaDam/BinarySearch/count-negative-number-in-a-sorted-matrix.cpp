/*Time Complexity: O(nlogm) where the n is number of rows and m is number of columns of the matrix*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int low,high,mid,ans,count=0;
        for(int i=0;i<grid.size();i++){
            low=0;
            high=grid[i].size()-1;
            ans=-1;
            while(low<=high){
                mid=low+(high-low)/2;
                if(grid[i][mid]>=0)
                    low=mid+1;
                else{
                    ans=mid;
                    high=mid-1;
                }
            }
            if(ans!=-1)
                count=count+(grid[i].size()-ans);
        }
        return count;
    }
};