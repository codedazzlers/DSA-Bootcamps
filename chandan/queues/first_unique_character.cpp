class Solution {
public:
    int firstUniqChar(string str) {
        vector arr(26,0);
for(int i =0;i<str.length();i++)
{
arr[str[i]-'a']++;
}
for(int i =0;i<str.length();i++)
{
if( arr[str[i]-'a']==1)
{
return i;
}
}

    return -1;
    }
};