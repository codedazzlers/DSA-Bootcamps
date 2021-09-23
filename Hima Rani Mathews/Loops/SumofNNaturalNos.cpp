#include<iostream>
using namespace std;
int main(){
	int n,s=0;
	cout<<"\nEnter the integer : ";
	cin>>n;
	cout<<"\nSum of Natural Nos upto "<<n<<" : ";
	for(int i=1;i<=n;i++){
		s+=i;
	}
	cout<<s;
}
