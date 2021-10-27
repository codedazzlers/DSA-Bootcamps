#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    cout<<"enter first string: ";
    getline(cin,s1);
    cout<<"enter second string: ";
    getline(cin,s2);
    s3=s1+s2;
    cout<<"the string after concationation is: "<<s3;
    return 0;

}