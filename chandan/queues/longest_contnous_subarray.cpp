class Solution {
public:
    int longestSubarray(vector<int>& a, int k) {
         deque<int> maxD, minD;
        int j=0,i=0,maxLen=0;
        
        for(j=0; j<a.size(); j++){
            while(maxD.size() && a[j]>maxD.back()) maxD.pop_back();
            maxD.push_back(a[j]);
            
            while(minD.size() && a[j] < minD.back()) minD.pop_back();
            minD.push_back(a[j]);
            
            if(maxD.front() - minD.front() > k){
                while(maxD.front() - minD.front() > k){
                    if(maxD.front() == a[i]) maxD.pop_front();
                    if(minD.front() == a[i]) minD.pop_front();
                    i++;
                }
            }
            maxLen = max(j-i+1, maxLen);
        }
        return maxLen;
        
    }
};