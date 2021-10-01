// Program to find factorial of a number

#include<iostream>
using namespace std;

int main(){
	int num, fact=1;
	cout<<"Enter the value : ";
	cin>>num;
	for(int i=num;i>0;i--){
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
	return 0;
}


