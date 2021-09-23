// Cpp program to count number of digits in a number.

#include<iostream>
using namespace std;
int main(){
	int num, digit;
	cout<<"Enter a number : ";
	cin>>num;
	while (num>=1){
		digit+=1;
		num=num/10;
	}
	cout<<"There are "<<digit<<" in the given number";
	return 0;
}




