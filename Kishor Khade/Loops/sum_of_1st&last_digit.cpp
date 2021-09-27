//Cpp program to find sum of first and last digit of any number
#include <iostream>
using namespace std;

int main(){
    int num, firstdigit, lastdigit, sum;
    cout<<"Enter a number to find sum of first & last digit :";
    cin>>num;
    lastdigit=num%10;
    while(num>=10){
    	num=num/10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	cout<<"Sum of first and last digit is "<<sum;
    return 0;
}
