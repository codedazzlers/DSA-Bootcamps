class Solution {
public:
   
    string replaceDigits(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(i%2!=0){
                res+=s[i-1]+(s[i]-'0');
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};