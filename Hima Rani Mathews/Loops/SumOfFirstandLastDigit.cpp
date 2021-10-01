#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"\nEnter the Number : ";
	cin>>n;
	int a=n;
	while(a>=10){
		a=a/10;
	}
	cout<<"\nSum of first digit : "<<a<<" & Last Digit :"<<n%10<<" = "<<a+(n%10); 
}
