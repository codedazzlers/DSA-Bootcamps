//Take input of age of 3 people by user and determine oldest and youngest among them.

#include<iostream>
using namespace std;
int main(){
	int age1, age2, age3;
	cout<<"Enter age of person 1: ";
	cin>>age1;
	cout<<"Enter age of person 2: ";
	cin>>age2;
	cout<<"Enter age of person 3: ";
	cin>>age3;
	if ((age1>age2) && (age1>age3)){
		cout<<"person 1 was older"<<endl;
		if (age2>age3)
		cout<<"Person 3 was younger"<<endl;
		else
		cout<<"Person 2 was younger"<<endl;
	}
	else if ((age2>age1) && (age2>age3)){
		cout<<"person 2 was older"<<endl;
		if (age1>age3)
		cout<<"Person 3 was younger"<<endl;
		else
		cout<<"Person 1 was younger"<<endl;
	}
	else {
		cout<<"person 3 was older"<<endl;
		if (age2>age1)
		cout<<"Person 1 was younger"<<endl;
		else
		cout<<"Person 2 was younger"<<endl;
	}
}
