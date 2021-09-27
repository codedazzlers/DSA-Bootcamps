//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

#include<iostream>
using namespace std;

int main(){
	int salary,year;
	cout<<"Enter your Salary per Month : ";
	cin>>salary;
	cout<<"Enter years of service : ";
	cin>>year;
	if (year>5)
	cout<<"Your net Bonus is "<<salary*0.05*12;
	else
	cout<<"No bonus";
	return 0;
}
