class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
         int l = m[0][0];
        int r = m[m.size() - 1][m.size() - 1];
        
        int mid;
        while(l <= r){
            mid = (l + r)/2;
            int num = 0;
            for(int i = 0; i < m.size(); i++){
                num += upper_bound(m[i].begin(), m[i].end(), mid) - m[i].begin();
            }
            if(num < k){
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return l;
    }
};