//Program to check weather a number is palindrome or not

#include<iostream>
using namespace std;

int main(){
	int num1, num2, i, num, rev=0;
	cout<<"Enter a Number : ";
	cin>>num1;
	num2=num1;
	while (num2!=0){
		num=num2%10;
		rev=num+rev*10;
		num2=num2/10;
	}
	if (rev==num1)
	cout<<"Given number is palindrome";
	else
	cout<<"Given number is not a palindrome";
	return 0;
}

