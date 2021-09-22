#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"\nEnter the integer : ";
	cin>>a;
	if(a>0){
		cout<<"Absolute Value of "<<a<<" is "<<a;
	}
	else{
		cout<<"Absolute Value of "<<a<<" is "<<(a*-1);
	}
}
