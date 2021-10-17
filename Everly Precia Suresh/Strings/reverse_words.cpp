class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string str;
        vector<string>v;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                res+=str;
                str="";
            }
            else
                str+=s[i];
        }
        for(int i=v.size()-1;i>=0;i--)
            res+=v[i];
        return res;
    }
};