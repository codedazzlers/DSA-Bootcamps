class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l=0;
        while(s[l]){
            l++;
        }
        string s1=s;
        for(int i=0;i<l;i++){
            s1[indices[i]]=s[i];
        }
        return s1;
    }
};