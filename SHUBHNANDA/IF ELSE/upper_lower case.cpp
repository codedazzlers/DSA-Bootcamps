#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter an alphabet"<<endl;
	cin>>ch;
	if( ch>='a' && ch<='z')
	 cout<<"entered alphabet is in lower case";
	else if (ch>='A' && ch<='Z')
	 cout<<"entered alphabet is in upper case";
	else
	 cout<<"it is nit an alphabet";

 return 0;
	 
}
