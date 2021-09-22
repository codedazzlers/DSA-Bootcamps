#include<iostream>
using namespace std;
int main(){
	int n,s=0;
	cout<<"\nEnter the integer : ";
	cin>>n;
	cout<<"\nSum of Even nos upto "<<n<<" : ";
	for(int i=1;i<=n;i++){
		if(i%2==0)
		s+=i;
	}
	cout<<s;
}
