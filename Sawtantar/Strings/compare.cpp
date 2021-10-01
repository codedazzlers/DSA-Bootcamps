#include<iostream>
using namespace std;
 
int main()
{
   string str_inp1;
   string str_inp2;
    
   cout<<"Enter the String 1:\n";
   cin>>str_inp1;
   cout<<"Enter the String 2:\n";
   cin>>str_inp2;
    
 
    if (str_inp1 == str_inp2) 
        cout <<"Strings are equal"<<endl; 
    else
        cout <<"Strings are not equal"<< endl; 
        return 0;
}