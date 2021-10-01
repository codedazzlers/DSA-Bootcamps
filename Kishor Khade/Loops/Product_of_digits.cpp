// Program to calculate product of digits of a number

#include<iostream>
using namespace std;

int main(){
	int num, product=1, last_digit;
	cout<<"Enter a number : ";
	cin>>num;
	while(num!=0){
		last_digit=num%10;
		product=product*last_digit;
		num=num/10;
	}
	cout<<"The product of Digits of a given number is "<<product;
	return 0;
}

