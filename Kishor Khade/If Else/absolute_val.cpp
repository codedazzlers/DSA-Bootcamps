// Write a program to print absolute vlaue of a number entered by user

#include<iostream>
using namespace std;

int main(){
	int val;
	cin>>val;
	if (val<0)
	cout<<"Absoulute value is: "<<-(val);
	else
	cout<<"Absoulute value is: "<<val;
	return 0;
}
