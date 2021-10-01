//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
//97-122
//65-90

#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	if (int(ch)>=65 && int(ch)<=90)
	cout<<"It is Uppercase alphabet"<<endl;
	else if (int(ch)>=97 && int(ch)<=122)
	cout<<"It is Lowercase alphabet"<<endl;
	else
	cout<<"you have given wrong input.";
	return 0;
}
