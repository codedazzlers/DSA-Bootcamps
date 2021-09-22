#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"\nEnter the character : ";
	cin>>ch;
	if(ch>=65 && ch<=90)
	cout<<"\n"<<ch<<" is Uppercase Letter";
	else if(ch>=97 && ch<=122)
	cout<<"\n"<<ch<<" is Lowercase Letter";
}
