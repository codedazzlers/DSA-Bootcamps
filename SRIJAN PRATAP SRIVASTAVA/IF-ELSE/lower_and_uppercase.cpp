#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    // cout<<int(ch);
    if(65<=int(ch) and int(ch)<=90) cout<<"UPPERCASE";
    else if(90<=int(ch) and int(ch)<=122) cout<<"LOWERCASE";
    return 0;
}