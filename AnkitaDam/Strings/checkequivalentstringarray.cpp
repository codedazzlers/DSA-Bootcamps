class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size();
        int n2=word2.size();
        string s1="",s2="";
        int i=0;
        for(i=0;i<n1;i++){
            s1+=word1[i];
        }
        for(i=0;i<n2;i++){
            s2+=word2[i];
        }
        i=0;
        while(s1[i] && s2[i]){
            if(s1[i]!=s2[i])
                return false;
            i++;
        }
        if(s1[i] ^ s2[i])
            return false;
        else
            return true;
    }
};