#include<iostream>
using namespace std;
int main(){
	int m;
	cout<<"\nEnter the marks : ";
	cin>>m;
	cout<<"Marks : "<<m<<" \nGrade : ";
	if(m>=80){
		cout<<"A";
	}
	else if(m<80 && m>=60){
		cout<<"B";
	}
	else if(m<60 && m>=50){
		cout<<"C";
	}
	else if(m<50 && m>=45){
		cout<<"D ";
	}
	else if(m<45 && m>=25){
		cout<<"E ";
	}
	else
	{
		cout<<"F ";
	}
	
}

