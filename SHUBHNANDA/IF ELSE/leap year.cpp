#include <iostream>
using namespace std;
int main()
{
	int yr;
	cout<<"enter the year";
	cin>>yr;
	if (yr%400==0)
	 cout<<"it is a leap a year";
	else if (yr%4==0)
	 cout<<"it is a leap year";
	else 
	cout<<"it is not a leap year";
 
 return 0;
	
}
