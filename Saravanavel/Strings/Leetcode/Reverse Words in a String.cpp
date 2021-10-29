class Solution {
public:
    string reverseWords(string s)
    {
        string ans="",temp="";
        int flag = 0;
        for(int i = s.length();i>=0;i--)
        {
            if(s[i]>='a' and s[i]<='z' || s[i]>='A' and s[i]<='Z' || s[i]>='0' and s[i]<='9' ) //or simply s[i]!= ' '
                temp+=s[i];
            else if(s[i] == ' ' and !temp.empty())
            {
                flag = 0;
                reverse(temp.begin(),temp.end());
                ans+=temp;
                int n=i-1;
                while(n>=0)
                {
                    if(s[n]>='a' and s[n]<='z' || s[n]>='A' and s[n]<='Z' || s[n]>='0' and s[n]<='9') //checking if there are any non space characters before this
                    {
                        flag=1;
                        break;
                    }
                    n--;
                }
                if(flag == 1) ans+=' ';
                temp="";
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};
