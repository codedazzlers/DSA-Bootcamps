class Solution {
public:
    string reverseWords(string s) {
        int i=0,previ,j,k=0,l;
        char t;
        string s1="",s2="";
        while(s[i]){
            i++;
        }
        l=i;
        i=i-1;
        while(i>=0){
            s1+=s[i];
            i=i-1;
        }
        i=0;
        previ=0;
        while(i<=l){
            if(s1[i]==' '||s1[i]=='\0'){
                for(j=i-1;j>=previ;j--){
                    s2=s2+s1[j];
                    k++;
                }
                if(k!=l){
                    s2=s2+' ';
                    k++;
                }
                previ=i+1;
            }
            i++;
        }
        return s2;
    }
};