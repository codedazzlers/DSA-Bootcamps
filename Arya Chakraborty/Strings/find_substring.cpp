#include <iostream>

using namespace std;
int length(string s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}
int main()
{
    char s[100]; cin.getline(s,100);
    char s1[100]; cin.getline(s1,100);
    int length2=length(s1);
    int i, j;
    for(i=0, j=0; s[i]!='\0'&&s1[j]!='\0'; i++)
    {
        if(s[i]==s1[j]) j++;
        else j=0;
    }
    if(j==length2) cout<<"present at "<<i-j+1;
    else cout<<"not found";
    return 0;
}
