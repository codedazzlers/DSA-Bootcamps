//https://leetcode.com/problems/queue-reconstruction-by-height/

//time complexity=O(n*n)

class Solution {
    static bool compare(vector<int>& x, vector<int>& y){
        //sorts array/vector : ascending order w.r.t. 1st element(if not, then 2nd element)
        if(x[0]==y[0]){
            return x[1]<y[1];
        }
        return x[0]<y[0];
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        sort(people.begin(), people.end(), compare);
        //sort array according to the 1st value, if not then 2nd value
        vector<vector<int>> ans(n, vector<int>(2,-1));
        //initialise answer vector same as people vector with value -1
        for(int i=0; i<n; i++){
            int c=people[i][1];
            //c=count which keeps count of the correct position
            for(int j=0; j<n; j++){
                if(ans[j][0]==-1 && c==0){
                    //correct position(vacant and count is 0)
                    ans[j][0]=people[i][0];
                    ans[j][1]=people[i][1];
                    break;//because correct position found there
                }
                else if(ans[j][0]==-1 || ans[j][0]>=people[i][0]){
                    //incorrect position(vacant but count!=0 or first element of the answer array>first element of the people array)
                    c--;//correct position becomes closer to count
                }
            }
        }
        return ans;
    }
};