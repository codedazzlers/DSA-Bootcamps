#include<iostream>
using namespace std;
int main(){
	int number;
	//Enter number to find its absolute no.
	cout << "Enter number " <<endl;
	cin << number;
	if(number<0)
	int abs_num=number*(-1);
	cout << "Absolute number of " << number << " is " << abs_num <<endl;
	else
	cout << "Absolute number of " << number << " is " << number <<endl;
}
