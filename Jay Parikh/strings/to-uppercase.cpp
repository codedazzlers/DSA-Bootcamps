#include <iostream>

using namespace std;

int main()
{
    char s[1000]; 
    cin.getline(s,100);
    for(int i=0;s[i]!='\0';i++)
    {
        s[i]=(s[i]>='A'&&s[i]<='Z')?(s[i]+32):s[i];
    }
    cout<<s;
    return 0;
}