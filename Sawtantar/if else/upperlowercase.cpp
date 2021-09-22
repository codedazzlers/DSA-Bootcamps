#include<iostream>
using namespace std;
int main1()
{
    char ch;
    
   cout <<"Enter any character: ";
    cin >>ch;


    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"it is uppercase alphabet.";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
       cout<< "is lowercase alphabet.";
    }
    else
    {
       cout<<"is not an alphabet.";
    }

    return 0;
}