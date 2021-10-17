#include<iostream>
 
using namespace std;
 
int main()
{  
char ch;
cout<<"Enter any character: ";
cin>>ch;
 
if(ch>='A'&&ch<='Z')
cout<<endl<<"You entered an uppercase character";
else if(ch>='a'&&ch<='z')
cout<<endl<<"You entered a lowercase character";
else
return 0;
}