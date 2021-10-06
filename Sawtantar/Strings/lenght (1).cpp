#include <iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Enter A String: ";
    cin>>s;
    int i=0;
    while(s[i])
    {
        i++;
    }
    
    cout<<"Length Of string is: "<<i;
    return 0;
}