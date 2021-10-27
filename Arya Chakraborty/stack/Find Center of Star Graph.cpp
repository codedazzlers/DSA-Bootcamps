//https://leetcode.com/problems/find-center-of-star-graph/

//time complexity=O(1)

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> a=edges[0];//stores the first element
        vector<int> b=edges[1];//stores the second element
        if(a[0]==b[1] || a[0]==b[0]){//checks whether the first element satisfies the given condition of being a star element
            return a[0];
        }
        else return a[1];
    }
};