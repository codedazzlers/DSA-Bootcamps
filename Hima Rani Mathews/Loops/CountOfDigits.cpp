#include<iostream>
using namespace std;
int main(){
	int n,c=0;
	cout<<"\nEnter the Number : ";
	cin>>n;
	cout<<"\nNo of Digits in "<<n<<" : ";
	while(n!=0){
		c++;
		n=n/10;
	}
	cout<<c;

}
