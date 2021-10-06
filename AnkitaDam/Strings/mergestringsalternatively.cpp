class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i=0,j=0;
        while(word1[i] && word2[j]){
            s=s+word1[i];
            s=s+word2[j];
            i++;
            j++;
        }
        while(word1[i]){
            s=s+word1[i];
            i++;
        }
        while(word2[j]){
            s=s+word2[j];
            j++;
        }
        return s;
    }
};