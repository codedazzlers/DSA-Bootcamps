class Solution {
public:
bool arrayStringsAreEqual(vector& word1, vector& word2)
{
string a = " ", b = " ";

for(int i = 0; i < a.size(); i++)
{
a += word1[i];
}

for(int i = 0; i < word2.size(); i++) 
{
b += word2[i];
}

return ( a == b) ? true : false;

}
};