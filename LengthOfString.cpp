#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<< "Enter string : " ;
    cin>>str;
    
    int i=0;
    while(str[i]!= 0){
        i++;
    }
    cout<< "String count is " <<i;
    return 0;
}