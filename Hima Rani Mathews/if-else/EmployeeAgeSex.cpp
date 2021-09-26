#include<iostream>
using namespace std;
int main(){
	int age;
	char s,mar;
	cout<<"\nEnter your Age, Sex & Marital Status : ";
	cin>>age>>s>>mar;
	if(s=='F'||s=='f')
	cout<<"Employee Works in Urban Areas";
	else if(s=='M'||s=='m')
	{
		if(age>=20 && age<40)
		cout<<"Employee Works Anywhere";
		else if(age>=40 && age<60)
		cout<<"Employee Works in Urban Areas";
		else
		cout<<"ERROR";
	}
}
