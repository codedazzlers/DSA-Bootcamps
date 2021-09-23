// Program to find HCF(gcd) of 2 numbers

#include<iostream>
using namespace std;

int main(){
	int num1, num2, num, gcd;
	cout<<"Enter the number1 : ";
	cin>>num1;
	cout<<"Enter the number2 : ";
	cin>>num2;
	num=(num1<num2)?num1:num2;
	for(int i=2;i<=num/2;i++){
		if (num1%i==0 && num2%i==0){
			gcd=i;
		}
	}
	cout<<"GCD of a given number is "<<gcd;
	return 0;
}

