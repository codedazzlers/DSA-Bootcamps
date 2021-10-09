#include<iostream>
using namespace std;

int main()
{
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