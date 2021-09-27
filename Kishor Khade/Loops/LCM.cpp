// Program to find LCM of 2 numbers

#include<iostream>
using namespace std;

int main(){
	int num1, num2, num, lcm;
	cout<<"Enter the number1 : ";
	cin>>num1;
	cout<<"Enter the number2 : ";
	cin>>num2;
	num=(num1<num2)?num1:num2;
	for(int i=2;i<=num/2;i++){
		if (num1%i==0 && num2%i==0){
			lcm=i;
			break;
		}
	}
	cout<<"LCM of a given number is "<<lcm;
	return 0;
}

