class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int l=word1.size();
        int r=word2.size();
        int maximum=max(l,r);
        for(int i=0;i<maximum;i++){
            if(l>0){
                res+=word1[i];
                l--;
            }
            if(r>0){
              res+=word2[i];
                r--;
            }
        }
        return res;   
    }
};