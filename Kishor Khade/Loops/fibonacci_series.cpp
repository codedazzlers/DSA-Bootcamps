// Program to print fibonacci series upto n terms

#include<iostream>
using namespace std;

int main(){
	int a=1, b=1, c, n;
	cout<<"Program to print fibonacci series upto n terms \n";
	cout<<"\nEnter the value for n : ";
	cin>>n;
	cout<<"1 1 ";
	for(int i=1; i<=n-2; i++){
		a=b;
		b=c;
		c=a+b;
		cout<<c<<' ';
	}
	return 0;
}


