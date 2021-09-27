#include<iostream>
using namespace std;
int main(){
	int a,rev=0,r,b;
	cout<<"\nEnter the integer : ";
	cin>>a;
	b=a;
	while(a!=0){
		r=a%10;
		rev=rev*10+r;
		a=a/10;
	}
	cout<<"Reverse of String "<<b<<" is "<<rev;
}
