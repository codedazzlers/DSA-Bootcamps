#include<iostream>
using namespace std;
int main(){
	int n,r,s=0;
	cout<<"\nEnter the Number : ";
	cin>>n;
	cout<<"\nSum of digits of "<<n<<" : ";
	while(n!=0){
		r=n%10;
		n=n/10;
		s+=r;
	}
	cout<<s;
}
