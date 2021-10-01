#include<iostream>
using namespace std;
int main(){
	int sal,yrofs,r,tot;
	cout<<"\nEnter Salary and Year of service : ";
	cin>>sal>>yrofs;
	if(yrofs>=5){
		r=0.5*sal;
		tot=sal+r;
		cout<<"Net Bonus Amount = "<<tot<<" with an increase of "<<r;
	}
	else
	{
		tot=sal;
		cout<<"Net Bonus Amount = "<<tot<<" with 0 increase";
	}
}
